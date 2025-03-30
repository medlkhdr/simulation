#include<iostream>
#include<vector>
using std::string;
using std::cin ;
using std::cout ;
using std::endl;
using std::vector;

void afficher(vector<int> nums ,string m  )

{
	cout << m << endl ;
	cout << "start ->" ;
	for(int num : nums)
		cout << num << "->" ;
	cout << "fin" << endl;
}
int main()
{
	vector<int> nums = {1 , 2 , 3 ,4 };
	afficher(nums, "initializing");
	nums.push_back(10);
	afficher(nums , "pushing") ;
	nums.pop_back();
	afficher(nums , "poping");
}
