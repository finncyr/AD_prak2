#include "EVKD.h"

class TEXT
{
private:
	EVKD *start;
	int sorted;
	void count_sorted();

public:
	int anz;
	TEXT();
	~TEXT();
	int getSorted();
	void anhaenge(char *);
	void einfuegeSortiert(EVKD *, int);
	EVKD *loesche(int);
	void zeigDich();
	void iSort();
};
