#include <iostream>
using namespace std;




class Point                         //Point��Ķ���
{
public:                             //�����ⲿ�ӿ�
	Point(int xx = 0, int yy = 0)   //���캯��
	{
		x = xx;
		y = yy;

	}
	Point(Point& p);                //���캯���ĸ���
	int getX() { return x; }
	int getY() { return y; }


private:
	int x,y;  //˽�г�Ա����

};


Point::Point(Point& p)								//���캯����ʵ��
{
	x = p.x+1;
	y = p.y;
	cout << "Calling the copy constructor";
}


void fun1(Point p)                                   //û�з���ֵ�Ĺ��캯�����ú���,�β���Point�����ĺ���
{
	cout << p.getX() << endl;
}
Point fun2()										//
{
	Point a(1, 2);
	return a;
}



int main()
{
	Point a(4, 5);
	Point b = a;
	cout << b.getX() << endl;
	fun1(b);
	b = fun2();
	cout << b.getX() << endl;
	return 0;





}