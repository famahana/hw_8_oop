#include <iostream>
#include "Flat.h"
using namespace std;


int main()
{
	Flat flat1(5,100000);
	Flat flat2(30,5000000);
	Flat flat3;
	if (flat1 == flat2)
	{
		cout << "==" << endl;
	}
	else
	{
		cout << "!=" << endl;
	}
	flat3 = flat1;
	cout << "Copied" << endl;
	flat3.print();
	if (flat1 > flat2)
	{
		cout << "Flat1 > Flat2" << endl;
	}
	else
	{
		cout << "Flat1 < Flat2" << endl;
	}

	return 0;
}