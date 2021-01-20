#include "TEXT.h"
#include <iostream>

TEXT::TEXT()
{
	start = nullptr;
	anz = 0;
}

TEXT::~TEXT()
{
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
			std::cout << iter->getDaten() << std::endl;
			iter = iter->getNext();
		}
		std::cout << iter->getDaten() << std::endl;
	}
}