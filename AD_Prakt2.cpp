#include "TEXT.h"
#include <iostream>

int main()
{
	TEXT *text = new TEXT();
	char *Name[] = {"Schmitz, Josef", "Mueller, Josi", "Schmitz, Anna", "Mueller, Josef", "Schmitz, Josi", "Mueller, Anna", "Meier, Josef", "Zacher, Josi", "Anker, Anna"};
	for (size_t i = 0; i < 9; i++)
	{
		text->anhaenge(Name[i]);
		text->zeigDich();
		std::cout << std::endl;
	}
}