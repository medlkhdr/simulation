#include<iostream>
using namespace std;

void processit(string str)
{
	cout << "Votre chaine apres traitemen : "  ;
	for(auto c : str)
	{
		if(c >= 'a' && c <= 'z')
		{
			c = toupper(c);
			cout << c;
		}
	 else
	{
			c = tolower(c);
			cout << c;
		}
	}
}
int main()
{
	string str;
	cout << "Saisir une chaine : " ; 
	cin >> str;
	processit(str);
}
