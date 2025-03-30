#include<iostream>
using namespace std;

void par_val(int a , int b)
{
	int temp = a ;
	a = b ;
	temp = b;
}
void par_ref(int &a, int &b)
{
	int tmp ;
	tmp  = a ;
	a = b ;
	b = tmp ;

}
void par_adrr(int *a  , int *b)
{
	int tmp ;
	tmp = *a ;
	*a = *b ; 
	*b = tmp;
}
int main()
{
	int a(0) , b(0);
	int tmpa , tmpb;
	cout << "Saisir l'entier A : " << endl;
	cin >> a ;
	cout << "Saisir l'entier B : " << endl;
	cin >> b ;
	tmpa = a ;
	tmpb = b ;
	cout << "******Transmission par valeur******" << endl ;
	cout << "======Avant l'appel de la fonction Echange:======" << endl;
	cout << "A = " << a << " B =  " << b  << endl ;
	cout << "======Avant l'appel de la fonction Echange:======" << endl;
	par_val(a , b);
	cout << "A = " << a << " B =  " << b  << endl ;
	a =tmpa; 
	b = tmpb ;
	cout << "******Transmission par reference******" << endl;
	cout << "======Avant l'appel de la fonction Echange:======" << endl;
	cout << "A = " << a << " B =  " << b  << endl ;
	cout << "======Apres l'appel de la fonction Echange:======" << endl;
	par_ref(a , b);
	cout << "A = " << a << " B =  " << b  << endl ;
	a  = tmpa ;
	b = tmpb ;
	cout << "******Transmission par adresse******" << endl;
	cout << "======Avant l'appel de la fonction Echange:======" << endl;
	cout << "A = " << a << " B =  " << b  << endl ;
	cout <<"======Apres l'appel de la fonction Echange:======" << endl;
	par_adrr(&a, &b);
	cout << "A = " << a << " B =  " << b  << endl ;
}
