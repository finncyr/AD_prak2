#include "EVKD.h"
#include <string.h>

EVKD::EVKD(char *LPSZDaten,  EVKD *N){
    //TODO
}

EVKD::EVKD(EVKD *copy){
    this->Anz = copy->Anz;
    setNext(copy);
    this->Daten = (new char *(*copy->Daten)); //TODO
}

char *EVKD::getDaten(){
    return *(new char*(*this->Daten));
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