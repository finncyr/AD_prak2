#include "EVKD.h"
#include <string.h>

EVKD::EVKD(char *LPSZDaten,  EVKD *N){
    this->Anz = (*(&LPSZDaten + 1) - LPSZDaten) - 1;
    this->Daten = new char[this->Anz];
    this->Next = N;

    for(int i = 0; i < this->Anz; i++){
        this->Daten[i] = LPSZDaten[i];
    }
}

EVKD::EVKD(EVKD *copy){
    this->Anz = copy->Anz;
    setNext(copy);
    this->Daten = (new char *(*copy->Daten)); //TODO
}

char *EVKD::getDaten(){
    return *(new char*(*this->Daten));
}

EVKD *EVKD::getNext(){
    return this->Next;
}

void EVKD::setDaten(char *Data){
    this->Anz = (*(&LPSZDaten + 1) - LPSZDaten) - 1;
}

void EVKD::setNext(EVKD *next){
    this->Next = next;
}

bool EVKD::operator ==(EVKD in){
    return (strcmp(*this->Daten, *in.Daten) == 0);
}

bool EVKD::operator >(EVKD in){
    return (strcmp(*this->Daten, *in.Daten) > 0);
}   