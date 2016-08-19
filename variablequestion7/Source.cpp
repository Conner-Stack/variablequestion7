#include <iostream>

using namespace std;

int main()
{

	//Question 7

	char letterSmaller;
	char letterLarger;
	char letterMid;
	char tmp;
	char preAns;

	cin >> letterLarger >> letterSmaller;

	//equation is larger letter (deci value) minus smaller letter (deci value) divided by 2 and then that answer gets added onto the smaller value to find the middle letter (deci value) then convert back to char form

	preAns = ((int)letterLarger - (int)letterSmaller) / 2;
	tmp = (int)letterSmaller;
	letterMid = (int)tmp + (int)preAns;
	cout << letterMid << endl;
	system("pause");
	return 0;
}