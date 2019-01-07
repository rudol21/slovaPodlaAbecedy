#include "zoznam.h"


using namespace std;
zoznam::zoznam()
{
}


zoznam::~zoznam()
{
	for (auto &p : zoznamSlov)
	{
		delete p;
	}
}

void zoznam::citajSubor(const char * menoSuboru)
{
	ifstream citac;
	citac.open(menoSuboru);
	string riadok;
	
	while (getline(citac, riadok)) 
	{
		zoznamSlov.push_back(new Slovo(riadok));
	}
	if (citac.is_open())
	{
		citac.close();
	}

}

void zoznam::zapisDoSuboru(const char * menoSuboru)
{
	fstream zapisovac(menoSuboru);
	//zapisovac.open(menoSuboru);
	int pocetSlov = zoznamSlov.size(); 
	
	for (int i = 0; i < pocetSlov; ++i) 
	{
		zapisovac << zoznamSlov[i]->dajSlovo() << endl;
	}
}

bool wayToSort(Slovo *s1, Slovo *s2) { return s1->dajSlovo() < s2->dajSlovo(); };
void zoznam::zoradPodlaAbecedy()
{
	sort(zoznamSlov.begin(), zoznamSlov.end(), wayToSort);
}

void zoznam::najdiZhodu()
{

	vector<Slovo*> pomocny;
	char *retazec1pom;
	char *retazec1;
	char *retazec2;
	
	retazec1pom = new char[50];
	printf("Zadaj retazec: ");
	scanf("%s", retazec1pom);
	retazec1 = new char[strlen(retazec1pom)];
	strcpy(retazec1, retazec1pom);
	

	for (int i = 0; i < zoznamSlov.size(); i++)
	{
		int dlzkaSlova = zoznamSlov[i]->getPocetZnakov();
		retazec2 = new char[dlzkaSlova +1];
		//retazec2 =  zoznamSlov[i]->dajSlovo().c_str();
		std::strcpy(retazec2, zoznamSlov[i]->dajSlovo().c_str());


		if (strlen(retazec2) >= strlen(retazec1))
		{
				if (strstr(retazec2, retazec1) != nullptr)
				{
					pomocny.push_back(zoznamSlov[i]);
				}
		}
	}

	if (pomocny.size() == 0)
		std::cout << "ziadna zhoda\n";
	else
		std::cout << "zhoda v tychto slovach\n";
	for (int i = 0; i < pomocny.size(); i++)
	{
		std::cout << pomocny[i]->dajSlovo();
		printf("\n");
	}

	
}





