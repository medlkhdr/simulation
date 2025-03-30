#include<iostream>
#include<array>
using std::cout;
using std::cin ;
using std::endl;
using std::array; 
int main()
{
	array<int ,4> nums = {1 , 2 ,3 ,4 };
	for(int num : nums)
	{
		cout << num << endl;
	}
}
