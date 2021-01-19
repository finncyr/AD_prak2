
class EVKD {
    private:
        char *Daten;
        int Anz;
        EVKD *Next;

    public:
        EVKD() : Daten(nullptr), Anz(0), Next(nullptr){};
        EVKD(char *LPSZDaten,  EVKD *N);
        EVKD(EVKD *);

        char *getDaten();
        EVKD *getNext();
        void setDaten(char *);
        void setNext(EVKD*);

        bool operator ==(EVKD);
        bool operator >(EVKD);
};