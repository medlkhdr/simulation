#include<iostream>
using namespace std;

namespace mohamed
{
void rot1(string str)
{
	for(int i = 0 ;  str[i] ; i++)
	{
		if(str[i] == 'a')
			cout << "z";
	 
	 else if (str[i] == 'A')
				cout << "Z" ;
	 else
		{
			str[i] += 1;
			cout <<  str[i] ;
	 }
	}
}
}
int main()
{
	string str ;
	cout << "Saisir une chaine : " ;

	getline(cin , str);

	cout << "Votre chaine apres traitement : " ;
	mohamed::rot1(str);
}
