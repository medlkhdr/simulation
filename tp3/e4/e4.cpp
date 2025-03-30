#include<iostream>
using namespace std;

namespace entier
{
int add(int x , int y)
{
	return x + y ;
}
int sub(int x , int y)
{
	return x - y;
}
}
namespace reel
{
double add(double x , double y)
{
	return x + y;
}
double sub(double x,  double y)
{
	return x - y;
}
}
namespace global
{
namespace entier=entier;
namespace reel=reel;
}
int main()
{
	int a(5) , b(13);
	cout << "Appel de la fonction add de namespace entier pour les deux entier 5 et 8:" << endl ;
	cout << global::entier::add(a, b) << endl;
	double x = 5.5 ;
	double y = 8.3 ;
	cout << "Appel de la fonction add de namspace reel pour les deux reels 5.5 et 8.3 :" << endl ;
	cout << global::reel::sub(x,y) << endl;
}
