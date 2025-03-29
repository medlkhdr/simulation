#include<iostream>
using namespace std;
int main()
{
	string str;
	cout << "Saisir une chaine : ";

	getline(cin , str);
	int count = 0 ;
	for(auto c : str)
	{
		if(c == 'o' || c == 'O' || c == 'i' || c == 'I' || c == 'e' || c == 'E' ||  c == 'y' || c == 'Y' || c == 'u' || c == 'U' || c == 'a' || c == 'A' )
			count++;
	}
	cout << "Nombre de voyelles : " << count << endl;
}
