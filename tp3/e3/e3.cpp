#include<iostream>
#include<cmath>
using namespace std;
double fonc(double x , bool &ok)
{
	double re = 0 ;
	if(x >= 1 && x <= 2)
	{
		re = (x - 1) * ( 2 - x );
		ok = true;
		return sqrt(re);
	}
	ok  = false ;
	return re ;
}

int main()
{
	double test ; 
	cout << "Tapez un double : " ;
	cin >> test ;
	bool ok = false ;

	double out = fonc(test , ok );
	if(ok)
	{
		cout << "la fonction est  definie au point " << test << endl;
		cout << "f(" << test << ") = "  << out << endl ;
	}
	else
		cout << "la fonction n'est pas definie au point " << test << endl;
} 
