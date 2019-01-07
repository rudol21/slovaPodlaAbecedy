#pragma once
#include <string>

using namespace std;
class Slovo
{
	//int pocetSlov = 0;
	string slovo;
public:
	Slovo(string pSlovo);
	~Slovo();
	//int getPocetSlov();
	//void pridajSlovo(string *slovo);
	int getPocetZnakov();
	string dajSlovo();
};

