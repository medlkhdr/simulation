#include<iostream>
using namespace std; 

int main()
{
	string str;
	cout << "Saisir une chaine : " ;

	getline(cin , str);

	cout << "Votre chaine apres exculusion des caracters speciaux : " ;
	for(auto c : str)
	{
		if(isdigit(c) || isalpha(c) || c == '-' || c == '_')
			cout << c ;
	}
}
