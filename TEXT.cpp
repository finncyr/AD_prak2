#include "TEXT.h"

TEXT::TEXT(EVKD *in, int inAnz){
    //TODO
}

void TEXT::zeigDich(){
    //TODO
}


void TEXT::anhaenge(char *ln){
    // Eine neue EVKD instanziieren
	EVKD* newEVKD = new EVKD();

	// Temp pointer
	EVKD *tmp = this->Start;

	if ( tmp != NULL ) {
		// Elemente bereits in der Liste vorhanden
		// Gehe zum Ende der Liste
		while ( tmp->getNext() != NULL ) {
			tmp = tmp->getNext();
		}

		// Zeiger vom letzten Listenelement aufs neue setzen
		tmp->setNext(newEVKD);
        this->Anz += 1;
	}
	else {
		// Erstes Element in der Liste
		this->Start = newEVKD;
        this->Anz += 1;
	}
}

void TEXT::einfuegeSortiert (EVKD *In, int Max){
    //TODO
}

EVKD *TEXT::loesche(int Pos){
    //TODO
}

void TEXT::iSort(){
    //TODO
}