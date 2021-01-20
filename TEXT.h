#include "EVKD.h"

class TEXT
{
private:
	EVKD *start;

public:
	int anz;
	TEXT();
	~TEXT();
	void anhaenge(char*);
	void einfuegeSortiert(EVKD*,int);
	EVKD* loesche(int);
	void zeigDich();
	
};