#include<iostream>
using namespace std;
int main(void)
{
	int sum  = 0;
	while(1)
	{
		int i;
		cin >> i;
		if(i < 0)
		{
			cerr << "ERROR!" << endl ;
			cout << "try to enter another value" << endl ;
			continue ;
		}
		sum += i ;
		if(i == 0)
			break ;
	}
	if(sum == 0)
		cout << "PAS DE MOYENNE" << endl;
	else
		cout << "la somme des nombres donner est : " << sum << endl ;
}
