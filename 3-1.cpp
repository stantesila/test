#include <iostream>


using namespace std;

double power(double x, int n)
{
	double val = 1.0;
	while (n--)
	{
		val *= x;

	}
	return val;


}

int main()
{	
	double k = 0;
	int h = 0;
	cout << "enter number and power :";
	cin >> k >> h;
	cout <<k<<"的"<<h<<"次方是："<< power(k, h) << endl;

	return 0;
}

