#include "TEXT.h"
#include <iostream>

TEXT::TEXT()
{
	start = nullptr;
	anz = 0;
	sorted = 1;
}

TEXT::~TEXT()
{
	EVKD *adresses[anz - 1];
	EVKD *iter = start;
	int i = 0;
	while (iter->getNext() != nullptr)
	{
		adresses[i++] = iter->getNext();
		iter = iter->getNext();
	}
	for (auto &&i : adresses)
	{
		delete i;
	}

	//TODO: Cleanup Nexts
	delete start;
}

void TEXT::anhaenge(char *In)
{
	EVKD *target = start;
	if (target != nullptr)
	{
		while (target->getNext() != nullptr)
		{
			target = target->getNext();
		}
		target->setNext(new EVKD(In));
		this->anz++;
		count_sorted();
	}
	else
	{
		start = new EVKD(In);
		anz = 1;
	}
}

EVKD *TEXT::loesche(int pos)
{
	EVKD *iter = start;
	if (pos > anz)
	{
		return nullptr;
	}
	else if (pos == 1)
	{
		start = start->getNext();
		this->anz--;
		if (pos < sorted)
			this->sorted--;
		return iter;
	}
	else
	{
		for (int i = 0; i < pos - 2; i++)
		{
			iter = iter->getNext();
		}
		EVKD *out = iter->getNext();
		iter->setNext(out->getNext());
		this->anz--;
		if (pos <= sorted)
			this->sorted--;
		return out;
	}
}

void TEXT::zeigDich()
{
	EVKD *iter = start;
	if (iter != nullptr)
	{
		while (iter->getNext() != nullptr)
		{
			std::cout << iter << ": " << iter->getDaten() << std::endl;
			iter = iter->getNext();
		}
		std::cout << iter << ": " << iter->getDaten() << std::endl;
	}
}

void TEXT::count_sorted()
{
	EVKD *iter = start;
	int i = 1;
	while (iter->getNext() != nullptr && *(iter->getNext()) > *iter)
	{
		i++;
		iter = iter->getNext();
	}
	this->sorted = i;
}

void TEXT::einfuegeSortiert(EVKD *in, int max)
{
	this->anz++;

	//in is smallest
	if (!(*in > *start))
	{
		in->setNext(start);
		this->start = in;
		count_sorted();
		return;
	}

	//in is larger than start
	EVKD *iter = start;
	for (int i = 1; i < max - 1; i++)
	{
		if (!(*(iter->getNext()) > *in))
		{
			iter = iter->getNext();
		}
	}
	in->setNext(iter->getNext());
	iter->setNext(in);
	count_sorted();
}

void TEXT::iSort()
{
	for (int i = 0; i < this->anz; i++)
	{
		this->einfuegeSortiert(this->loesche(i + 1), this->sorted);
		//std::cout << std::endl;
		//this->zeigDich(); //Debugging, remove
	}
}
