//���ļ�infile.dat��ȡ����������ͣ������д���ļ�out.bat
#include <fstream>
#include <iostream>
#include <cstdlib>

int main()
{
	using namespace std;
	ifstream inStream;
	ofstream outStream;
	
	inStream.open("infile.dat");
	if (inStream.fail())
	{
		cout << "Input file opening failed.\n";
		exit(1);
	}
	outStream.open("outfile.out");

	if (outStream.fail())
	{
		cout << "outfile opening failed.\n";
		exit(1);
	}
	int first, second, third;
	inStream >> first >> second >> third;
	outStream << "The sum of the first 3\n"
		<< "number in infile.dat\n"
		<< "is" << (first + second + third)
		<< endl;

	inStream.close();
	outStream.close();



	return 0;
}