#include <iostream>
using namespace std;




class Point                         //Point类的定义
{
public:                             //函数外部接口
	Point(int xx = 0, int yy = 0)   //构造函数
	{
		x = xx;
		y = yy;

	}
	Point(Point& p);                //构造函数的复制
	int getX() { return x; }
	int getY() { return y; }


private:
	int x,y;  //私有成员参数

};


Point::Point(Point& p)								//构造函数的实现
{
	x = p.x+1;
	y = p.y;
	cout << "Calling the copy constructor";
}


void fun1(Point p)                                   //没有返回值的构造函数调用函数,形参是Point类对象的函数
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