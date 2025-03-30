#include<iostream>
#include<deque>
using std::cout ;
using std::cin ;
using std::endl ;
using std::string ;
using std::deque ;

void afficher(deque<int> nums , std::string m )
{
	cout << m << endl ;
	cout << "start->" ;
	for(int num : nums)
		cout << num << "->";
	cout << "fin" << endl;
}

int main()
{
	deque<int> nums = {1 ,2 , 3};
	afficher(nums , "initialise");
	nums.push_front(0);
	nums.push_back(4);
	afficher(nums , "push front and back ");
	return 0;
}
