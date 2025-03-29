#include<iostream>
using namespace std;
int main()
{
	string str;
	cout << "Saisir une chaine : " ;
	getline(cin ,str);
	int l  = str.length();
	cout << "Votre chaine apres traitement : " ;
	while(l)
	{
		--l;
		cout << str.at(l);
	}
}
