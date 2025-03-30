#include<iostream>
#include<set>
using std::cin ;
using std::endl;
using std::set;
using std::cout ;
void afficher(set<int> nums , std::string m )
{
	cout << m << endl ;
	cout << "start->" ;
	for(int num : nums)
		cout << num << "->" ;
	cout << "fin"  << endl;

}
int main()
{
	set<int> nums = {1, 2 ,3 ,2, 1 };
	afficher(nums , "initiale");
	nums.insert(32);
	afficher(nums , "inserted a random number");
	return 0;
}
