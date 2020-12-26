#include <EVKD.h>

class TEXT{
    private:
        EVKD *Start;
    
    public:
        int Anz;

        TEXT(EVKD *, int);

        void zeigDich();
        void anhaenge(char *ln);
        void einfuegeSortiert (EVKD *In, int Max);
        EVKD * loesche(int Pos);
        void iSort();
};