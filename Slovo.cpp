#include "Slovo.h"



Slovo::Slovo(string pSlovo)
{
	slovo = pSlovo;
}


Slovo::~Slovo()
{
}

int Slovo::getPocetZnakov()
{
	return slovo.length();
}

string Slovo::dajSlovo()
{
	return slovo;
}
