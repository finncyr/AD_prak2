#include "TEXT.h"
#include <iostream>

int main()
{
	TEXT *text = new TEXT();
	char *Name[] = {"Schmitz, Josef", "Mueller, Josi", "Schmitz, Anna", "Mueller, Josef", "Schmitz, Josi", "Mueller, Anna", "Meier, Josef", "Zacher, Josi", "Anker, Anna"};
	//char *Name[] = {"7", "5", "6", "4", "8", "3", "2", "9", "1"};
	for (size_t i = 0; i < 9; i++)
	{
		text->anhaenge(Name[i]);
	}
	text->zeigDich();
	text->iSort();
	std::cout << std::endl;
	text->zeigDich();
	delete text;
}