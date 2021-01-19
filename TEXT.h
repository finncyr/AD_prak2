#include <EVKD.h>

#define NULL nullptr

class TEXT{
    private:
        EVKD *Start;
    
    public:
        int Anz;

        TEXT() : Start(NULL), Anz(0){};
        TEXT(EVKD *, int);

        void zeigDich();
        void anhaenge(char *ln);
        void einfuegeSortiert (EVKD *In, int Max);
        EVKD * loesche(int Pos);
        void iSort();
};