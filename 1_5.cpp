//输出c   由你输入的字母组
#include <iostream>
using namespace std;


//string ch;


void Cpr(char tigger)
{


	cout << "  " << tigger << " " << tigger << " " << tigger << endl;
	cout << " " << tigger  << "     " << tigger << endl;
	cout << tigger << endl;
	cout << tigger  << endl;
	cout << tigger << endl;
	cout << " " << tigger<< "     " << tigger << endl;
	cout << "  " << tigger<< " " << tigger << " " << tigger << endl;
	return;
}





int main()
{
	char ch;
	cout << "请输入你的字母: ";
	cin >> ch;
	Cpr(ch);

	return 0;
}

