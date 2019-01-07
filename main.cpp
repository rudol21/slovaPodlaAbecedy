
#include "zoznam.h"
#include "citajZoSuboru.h"

int main(int argc, char * argv[])
{
	zoznam *zozn;
	zozn = new zoznam();
	zozn->citajSubor("slovo.txt");
	zozn->zoradPodlaAbecedy();
	zozn->zapisDoSuboru("zapis.txt");
	zozn->najdiZhodu();
}