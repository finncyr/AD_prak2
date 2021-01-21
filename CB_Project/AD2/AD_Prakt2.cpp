#include "TEXT.h"
#include <iostream>
#include <string.h>

void textSeperator(){
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}

int main()
{
    TEXT *text = new TEXT();
    char *Name[] = {"Schmitz, Josef", "Mueller, Josi", "Schmitz, Anna", "Mueller, Josef", "Schmitz, Josi", "Mueller, Anna", "Meier, Josef", "Zacher, Josi", "Anker, Anna"};
    int menuchoice = 0;
    int loeschpos = 0;
    std::string import;
    char *importchar = new char[100];

	while(menuchoice != 12){
        std::cout << "##########################################" << std::endl;
        std::cout << "#           Verkettete Listen            #" << std::endl;
        std::cout << "##########################################" << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Bitte Menuepunkt waehlen:" << std::endl;
        std::cout << std::endl;
        std::cout << "1.) Listenobjekt erstellen" << std::endl;
        std::cout << "2.) Liste anzeigen" << std::endl;
        std::cout << "3.) Element anhaengen" << std::endl;
        std::cout << "4.) Element sortiert einfuegen" << std::endl;
        std::cout << "5.) Element loeschen" << std::endl;
        std::cout << "6.) Liste sortieren" << std::endl;
        std::cout << std::endl;
        std::cout << "12.) Ende" << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;

        std::cout << "Nummer eingeben: ";
        std::cin >> menuchoice;

        switch(menuchoice){

        case 1:
            for (size_t i = 0; i < 9; i++)
            {
                text->anhaenge(Name[i]);
            }
            textSeperator();
            break;

        case 2:
            text->zeigDich();
            textSeperator();
            break;

        case 3:
            std::cout << "Namen zum Anhaengen eingeben: ";
            getchar();
            std::getline(std::cin, import);
            strcpy(importchar, import.c_str());
            text->anhaenge(importchar);
            textSeperator();
            break;

        case 4:
            std::cout << "Namen zum Anhaengen eingeben: ";
            getchar();
            std::getline(std::cin, import);
            strcpy(importchar, import.c_str());
            text->einfuegeSortiert(new EVKD(importchar), text->getSorted());
            textSeperator();
            break;

        case 5:
            std::cout << "Position eingeben: ";
            std::cin >> loeschpos;
            text->loesche(loeschpos);
            textSeperator();
            break;

        case 6:
            text->iSort();
            textSeperator();
            break;

        case 12:
            break;
        default:
            menuchoice = 12;
            break;
        }
	}

	delete text;
	delete importchar;

	return 0;
}
