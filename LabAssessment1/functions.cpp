#include <iostream>
using namespace std;
void PassByRef(int &num)
{
	cout << "Indside PassByRef()" << endl;
	num *= 10;
	cout << "Changed value of num = " << num << endl;
}

void PassByValue(int num) {
	cout << "Indise PassByValue()" << endl;
	num += 5;
	cout << "Changed value of num = " << num << endl;
}