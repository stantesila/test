/*
����һ��������ж�  

��������һ�����


�ж� ��������4�����ܱ�100���������߿��Ա�400����


���

*/
#include <iostream>




int main()
{
	using namespace std;
	int input_year = 0;
	bool LeapYear;


	cout << "����������жϵ����";
	cin >> input_year;
	LeapYear = ((input_year % 4 == 0) &&( 100 % input_year!=0) ||( 400 % input_year==0)); //(����������4 )�� && �������Ա�100 ������)   || (��400 ����)

	if (LeapYear)
		cout << "��������\a";
	else
		cout << "����";

	return 0;
}