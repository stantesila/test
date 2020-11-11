/*这是以个switch的分支走向*/




#include <iostream>



using namespace std;


int main()
{	
	int day = 0;
	cout << "请输入第几天";
	cin >> day;
	switch (day)
	{
	case 0:
		cout << "这是星期一";
		break;
	case 1:
		cout << "这是星期二";
		break;
	case 2:
		cout << "这是星期三";
		break;
	case 3:
		cout << "这是星期四";
		break;
	case 4:
		cout << "这是星期五";
		break;
	case 5:
		cout << "这是星期六";
		break;
	case 6:
		cout << "星期六";
		break;
	case 7:
		cout << "星期天";
		break;


	
	default:
		cout << "输入有问题";
		break;
		

	
	
	
	}



	return 0;
}