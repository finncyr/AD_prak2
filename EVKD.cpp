#include "EVKD.h"
#include <cstring>

EVKD::EVKD(char *LPSZDaten, EVKD *N) : next(N)
{
	int i = 0;
	while (*(LPSZDaten + i) != '\0')
	{
		i++;
	}
	anz = i;

	daten = new char[anz];
	for (int i = 0; i < anz; i++)
	{
		daten[i] = *(LPSZDaten + i);
	}
}

EVKD::EVKD(char *LPSZDaten) : EVKD(LPSZDaten, nullptr) {}

EVKD::EVKD(EVKD &evkd) : daten(evkd.daten), anz(evkd.anz), next(evkd.next) {}

EVKD::~EVKD()
{
	delete[] daten;
}

char *EVKD::getDaten()
{
	static char out[anz + 1]; //This won't work
	for (int i = 0; i < anz; i++)
	{
		out[i] = daten[i];
	}
	out[anz] = '\0';
	return out;
}

int EVKD::getAnz() { return anz; }

EVKD *EVKD::getNext() { return next; }

void EVKD::setNext(EVKD *evkd) { next = evkd; }

int EVKD::strcmp(const EVKD *lhs, const EVKD *rhs)
{
	char left[lhs->anz + 1];
	for (int i = 0; i < lhs->anz; i++)
	{
		left[i] = lhs->daten[i];
	}
	left[lhs->anz] = '\0';

	char right[rhs->anz + 1];
	for (int i = 0; i < rhs->anz; i++)
	{
		right[i] = rhs->daten[i];
	}
	right[rhs->anz] = '\0';

	return std::strcmp(left, right);
}

bool EVKD::operator==(const EVKD &rhs)
{
	return (strcmp(this, &rhs) == 0) ? true : false;
}

bool EVKD::operator>(const EVKD &rhs)
{
	return (strcmp(this, &rhs) > 0) ? true : false;
}
