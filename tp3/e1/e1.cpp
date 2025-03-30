#include<iostream>
using namespace std;
void Appel()
{
	static int count = 0;
	count ++;
	cout << "Appel numero " << count << endl;
}
int main()
{
	while(1)
	{
		char c ;
		cout << "Pour faire appel a la fonction \"Appel\", tapez \'o\'. " << endl ;
		cout << "Sinon. tapez autre chose : ";
		cin >> c ;
		if(c == 'o' || c == 'O')
		{
			Appel();
		}
		else
			break;
	}
	cout << "Fin du programme." << endl;
}
