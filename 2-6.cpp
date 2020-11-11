//µßµ¹ÄãÊäÈëµÄÊı×Ö


#include <iostream>


using namespace std;



int main()
{	
	int number = 0;
	int T=0;
	cout << "Enter your number :";
	cin >> number;
	do
	{	
		T = number % 10;
		cout << T;
		number /= 10;

	} while (number != 0);
		cout << endl;
	return 0;
}