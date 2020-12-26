
class EVKD {
    private:
        char *Daten[];
        int Anz;
        EVKD *Next;

    public:
        EVKD(char *LPSZDaten,  EVKD *N);
        EVKD(EVKD *);

        char *getDaten();
        void setNext(EVKD);

        EVKD operator ==(EVKD);
        EVKD operator >(EVKD);
};