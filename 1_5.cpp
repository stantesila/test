//���c   �����������ĸ��
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
	cout << "�����������ĸ: ";
	cin >> ch;
	Cpr(ch);

	return 0;
}

