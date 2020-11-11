#include <iostream>



using namespace std;



int main()
{

	string middleName, petName;
	string alterEgoName;


	cout << "Enter your middle name and the name of your pet :\n";
	cin >> middleName;
	cin >> petName;



	alterEgoName = middleName + "  " + petName;

	cout << "The name of your alter ego is ";
	cout << alterEgoName<<"."<<endl;










	return 0;
}