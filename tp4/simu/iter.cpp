#include<iostream>
#include<list>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::list;
void afficher_norm(list<int> nums , std::string m )
{
	cout << m << endl ;
	cout << "start->" ;
	for(int num :nums)
		cout << num << "->" ;
	cout << "fin" << endl;
}

void afficher_iter(list<int>nums , std::string a)
{
	cout << a << endl ;
	cout << "start->" ;
	for(list<int>::iterator it = nums.begin() ; it != nums.end() ; ++it)
		cout << *it << "->" ;
	cout << "fin" << endl; 
}
int main()
{
	list<int> nums = {1 ,2 ,3};
	afficher_norm(nums , "sans iterator");
	afficher_iter(nums , "avec iterator");
}


