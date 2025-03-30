#include<iostream>
#include<list>
using std::list; 
using std::cout;
using std::cin ;
using std::string ;
using std::endl;
void afficher(list<int> nums , string c)
{
	cout << c << endl ;
	cout << "Les elements du liste : " << endl  ; 
	cout << "start->" ;
	for(int num : nums)
		cout << num << "->" ;
	cout << "fin"  << endl ;
}
int main()
{
	list<int> nums = {1, 2,3 };
	afficher(nums , "nothing");
	nums.push_back(100) ;
	afficher(nums , "push back");
	nums.push_front(100);
	afficher(nums , "push front");
	nums.pop_front();
	nums.pop_back();
	afficher(nums , "pop back and front");
}
