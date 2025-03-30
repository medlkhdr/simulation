#include <iostream>
#include<list>
using std::cout ;
using std::cin ;
using std::string ;
using std::list;
using std::endl;
void menu()
{
	cout << "========================================================" << endl;
	cout << "							MENU						 " << endl;
	cout << "========================================================" << endl;
	cout << "1. Taper 1 pour ajouter un entier dans la liste" << endl;
	cout << "2. Taper 2 pour afficher la liste des entiers" << endl;
	cout << "3. Taper 3 pour supprimer le dernier entier de la liste" << endl;
	cout << "4. Taper 4 pour afficher le dernier entier saisi dans la liste" << endl;
	cout << "5. Taper 5 pour Quitter" << endl ;
	cout << "========================================================" << endl;
}
int main()
{
	list<int> l ;
	while(1)
	{
		int a ;
		menu();
		int choix ;
		cout << "Veuillez saisir votre choix" << endl ;
		cin >> choix ;
		switch(choix)
		{
			case 1 : 
				cout << "Veuillez taper l'entier que vous voulez ajouter" << endl;
				int i ;
				cin >> i ;
				l.push_front(i);
			break;
			case 2:
				cout << "le contenu la liste est : " << endl;
				for(int n : l)
					cout << n << "->" ;
				cout << "fin" << endl ;
			break;
			case 3:
				cout << "Vous avez choisi de supprimer le dernier entier de la liste" << endl ;
				l.pop_back();
			break;
			case 4:
				a = l.back();
				cout << "le dernier element dans la liste est : " << a << endl ;
			break;
			case 5:
				cout << "Fin de programme" << endl;
			return 0;
				break;
			default:
				cout << "ERREUR, le numero saisi ne correspond a aucun choix dans la liste. Resayez." << endl ;
			break;
		}
	}
	return 0;
}
