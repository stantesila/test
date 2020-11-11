#include <iostream>


using namespace std;

double totalCost(int numberPar, double pricePar);

int main()
{

	double price,bill;
	int number;

	cout << "Enter the number of items purchased :";
	cin >> number;
	cout << "Enter the price of items $ :";
	cin >> price;

	bill = totalCost(number, price);



	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << number << "items at "
		<< "$" << price << "each.\n"
		<< "Final bill,including tax,is % " << bill
		<< endl;


	return 0;
}



double totalCost(int numberPar, double pricePar)
{
	const double	TAX_RATE = 0.05;   //0.05µÄË°ÊÕ
	double subtotal;

	subtotal = numberPar * pricePar;
	return (subtotal+subtotal*TAX_RATE);

}