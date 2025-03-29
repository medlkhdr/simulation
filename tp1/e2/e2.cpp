#include<iostream>
using namespace std;


int main()
{
	int N ;
	cin >> N;
	bool check ;
	for(int i = 2 ; i <= N ; i++)
	{
		check = true ;
		for(int j = 2 ; j < i ; j++)
		{
			if(i % j == 0)
			{
				check = false;
				break;
			}
		}
		if(check)
			cout << "number is prime : " << i  << endl;
	}
}
