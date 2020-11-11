/*
这是一个闰年的判断  

分析输入一个年份


判断 可以整除4而不能被100整除，或者可以被400整除


输出

*/
#include <iostream>




int main()
{
	using namespace std;
	int input_year = 0;
	bool LeapYear;


	cout << "请输出你想判断的年份";
	cin >> input_year;
	LeapYear = ((input_year % 4 == 0) &&( 100 % input_year!=0) ||( 400 % input_year==0)); //(（可以整除4 )与 && （不可以被100 整除）)   || (被400 整除)

	if (LeapYear)
		cout << "这是闰年\a";
	else
		cout << "不是";

	return 0;
}