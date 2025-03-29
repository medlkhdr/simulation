#include<iostream>
using namespace std;
void menu()
{
	cout << "================================================" << endl;
	cout <<	"                      MENU                      " << endl;
	cout << "================================================" << endl;
	cout << "1. Taper 1 pour incrémenter l’entier par un " << endl;
	cout << "2. Taper 2 pour décrémenter l’entier par 2"<< endl;
	cout << "3. Taper 3 pour multiplier l’entier par 10"<< endl;
	cout << "4. Taper 4 pour quitter" << endl;
}
int main()
{
	int env = 0 ;
	while(1)
	{
		menu();
		int choix ;
		cin >> choix ;
		switch(choix)
		{
			case 1: 
				env++;
			break;
			case 2:
				env = env - 2;
			break;
			case 3:
				env *= 10;
			break;
			case 4:
				cout << "Programme terminé. Au revoir !" << endl;
			return 0;
			default:
				cout << "Choix invalide ! Lisez le menu attentivement." << endl;
			continue;
		}
		cout << "La valeur du nombre après l'opération " << choix << " est : " << env << endl;
	}
}
