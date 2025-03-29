#include <iostream>
using namespace std;
int main()
{
	string str;
	int countword  =  0 ;

	bool flag = true ;
	getline(cin , str);
	if(!str.empty())
		countword++;
	for(int i = 0 ; str[i] != '\0' ; i++)
	{
		if(str[i] != 32)
		{
			if(!flag)
			{
				flag = true;
	 			countword++;
			}
		}
	 else
	 	flag = false;
	}
	cout << "Nombre de mors dans votre chaine :" << countword << endl;
}
