#include "EVKD.h"
#include <string.h>

EVKD::EVKD(char *LPSZDaten,  EVKD *N){
    //TODO
}

EVKD::EVKD(EVKD *copy){
    //TODO
}

char *EVKD::getDaten(){
    //TODO
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