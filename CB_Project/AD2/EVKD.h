class EVKD
{
private:
	char *daten;
	int anz;
	EVKD *next;
	static int strcmp(const EVKD *lhs, const EVKD *rhs);

public:
	EVKD(char *LPSZDaten, EVKD *N);
	EVKD(char *LPSZDaten);
	EVKD(EVKD &);
	~EVKD();
	bool operator==(const EVKD &);
	bool operator>(const EVKD &);
	char *getDaten();
	int getAnz();
	EVKD *getNext();
	void setNext(EVKD *);
};