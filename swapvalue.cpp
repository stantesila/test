/*
չʾ��ֵ�ʹ����ò���������
*/



#include <iostream>
#include <Windows.h>

using namespace std;



//void doStuff(int par1Value, int& par2Ref);
//par1Value�Ǵ��������par2Ref�Ǵ������ò���


void figureMeOut(int& x, int y, int& z);

int main()
{

	//int n1, n2;
	//n1 = 1;
	//n2 = 2;
	////doStuff(n1, n2);
	//cout << "n1 after function call =" << n1 << endl;
	//cout << "n2 after function call =" << n2 << endl;

	//Beep(500, 400);
	//Beep(500, 400);
	//Beep(500, 400);
	//Beep(500, 400);
	//Beep(500, 400);



	int a, b, c;
	a = 10;
	b = 20;
	c = 30;
	figureMeOut(a, b, c);
	cout << a <<"\t"<< b <<"\t"<< c << endl;




	return 0;
}


//void doStuff(int par1Value, int& par2Ref) 
//{	
//	
//	par1Value = 111;
//	cout << "par1Value in function call =" << par1Value << endl;
//	par2Ref = 222;
//	cout << "par2Ref in  function call = " << par2Ref << endl;
//}


void figureMeOut(int& x, int y, int& z)
{
	cout << x<< "\t" << y <<"\t"<< z << endl;
	x = 1;
	y = 2; 
	z = 3;
	cout << x << "\t" << y << "\t" << z << endl;
}