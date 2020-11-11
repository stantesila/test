#include <iostream>

using namespace std;

const double LOW_MARKUP = 0.05;
const double HIGHT_MARKUP = 0.10;
const int THISDAY = 7;




void introduction();
void getInput(double &baseprice, int &day);
double CalutateSellPrice(float baseprice, int day);
void showPrice(double basesprice,int day,double price);

int main()
{
	double whosaleCost,reatailPrice;
	int sellday;

	introduction();
	getInput(whosaleCost,sellday);
	reatailPrice = CalutateSellPrice(whosaleCost, sellday);
	showPrice(whosaleCost, sellday, reatailPrice);
}


void introduction() 
{
	cout << "\t*********这是超市售卖价格计算系统***************" << endl<<endl
		<< "\t输入物品基本价格和预计售卖天数即可算出最佳售卖价格" << endl<<endl;

}

void getInput(double& baseprice, int& day)
{
	cout << "请输入物品的基本价格:";
	cin >> baseprice;
	cout << endl;
	cout << "请输入物品的预计售卖天数:";
	cin >> day;

}

double CalutateSellPrice(float baseprice, int day) 
{
	if (THISDAY <= day)
		return (baseprice+(baseprice*LOW_MARKUP));
	else 
		return (baseprice + (baseprice * HIGHT_MARKUP));
	return 0;
}

void showPrice(double basesprice, int day, double price)
{
	cout << "\t商品基本价格是" << basesprice << endl<<endl;
	cout << "\t商品预计售卖日期是" << day << endl<<endl;
	cout << "\t商品最佳定价" << price << endl<<endl;

}