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
	cout << "\t*********���ǳ��������۸����ϵͳ***************" << endl<<endl
		<< "\t������Ʒ�����۸��Ԥ�������������������������۸�" << endl<<endl;

}

void getInput(double& baseprice, int& day)
{
	cout << "��������Ʒ�Ļ����۸�:";
	cin >> baseprice;
	cout << endl;
	cout << "��������Ʒ��Ԥ����������:";
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
	cout << "\t��Ʒ�����۸���" << basesprice << endl<<endl;
	cout << "\t��ƷԤ������������" << day << endl<<endl;
	cout << "\t��Ʒ��Ѷ���" << price << endl<<endl;

}