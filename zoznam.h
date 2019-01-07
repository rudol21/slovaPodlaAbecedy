#pragma once
#include <string>
#include <vector>
#include "Slovo.h"
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
class zoznam
{
	vector<Slovo*> zoznamSlov;

public:
	zoznam();
	~zoznam();
	void citajSubor(const char * menoSuboru);
	void zapisDoSuboru(const char * menoSuboru);
	void zoradPodlaAbecedy();
	void najdiZhodu();
		
	
};

