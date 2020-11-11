//c code  to explain why not clearing 
//the input buffer causes undesired outputs
#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int a;
	char ch[80];




	cin >> a;
	cin.getline(ch, 80);


	cout << a << endl;


	cout << ch << endl;


	return 0;
}