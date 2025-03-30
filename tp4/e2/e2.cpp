#include<iostream>
#include<array>
using namespace std;

int main()
{
	array<int , 10 > tab ;
	cout << "Veuillez taper les 10 entiers du tableau:" << endl;
	for(int i = 0 ; i < 10 ; i++)
	  cin >>  tab.at(i);
	cout << "le contenu du tableau est :" << endl;
	for(int c : tab)
		cout << c << endl;
	int s =  0 ; 
	cout << "Veuillez taper l'entier a chercher dans le tableau :" << endl ;
	cin >> s ;int i = 1;
	for(int c : tab)
	{
		if(c == s)
		{
			cout << "la premier occurence de " << s << " se trouve a la position " << i << endl;
			return 0;
		}
		i++;
	}
	cout << s << " ne figure pas dans le tableau !" << endl ;
}
