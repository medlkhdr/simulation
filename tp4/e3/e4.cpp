#include<iostream>
#include<vector>
using namespace std; 
void afficher(vector<vector<double>> matrix)
{
	int l = 2 ;
	int c = 4 ;
	for(int i = 0 ; i < l ; i ++)
	{
		for(int j = 0 ; j < c ; j++)
			cout << matrix[i][j] << " " ;
		cout << endl ;
	}
}
int main()
{
	int lig = 2;
	int col = 4;
	vector<vector<double>> m(lig , vector<double>(col));
	for(int i = 0 ; i < lig ; i++)
	{
		for(int j = 0 ; j  <  col ; j++)
		{
	
			cin >> m[i][j];
		}
	}
	afficher(m);
	// les linges
	double colones = 0;
	double sc = 0;
	double lignes = 0;
	double sl  = 0;
	double all = 0;
	for(int i = 0; i < lig ; i ++ )
	{

		for(int j = 0   ;  j < col ; j++)
		{
			lignes += m[i][j] ;
		}
		sl += lignes ;
		lignes /= 4; 
		cout << lignes << endl; 
	}
	for(int i = 0 ; i < col ; i++)
	{
		for(int j = 0 ; j < lig ; j++)
		{
		}
	}
}
