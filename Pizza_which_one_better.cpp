/*
输入两个披萨的价格和直径
程序做出判断那个性价比高

*/

#include <iostream>




double unitPrice(int diameter, double price);






int main()
{
	using namespace std;

	int diameterSmall, diameterLarge;
	double priceSmall, priceLarge,
		unitpriceSmall, unitpriceLarge;

		
	cout << "Welcome to the Pizza Consumers Union.\n";
	cout << "Enter diameter of a small pizza(in inches):";
	cin >> diameterSmall;
	cout << "Enter the price of a small pizza:$";   
	cin >> priceSmall;

	cout << "Welcome to the Pizza Consumers Union.\n";
	cout << "Enter diameter of a Large pizza(in inches):";
	cin >> diameterLarge;
	cout << "Enter the price of a Large pizza:$";
	cin >> priceLarge;

	unitpriceSmall = unitPrice(diameterSmall, priceSmall);
	unitpriceLarge = unitPrice(diameterLarge, priceLarge);

	if (unitpriceLarge < unitpriceSmall)
		cout << "The large one is the better buy.\n";
	else
		cout << "The small one is the better buy.\n";

	return 0;
}




double unitPrice(int diameter, double price)
{
	const double PI = 3.14159;
	double area,radius;


	radius = diameter / static_cast<double>(2);
	area = PI * radius * radius;
	return (price / area);


}