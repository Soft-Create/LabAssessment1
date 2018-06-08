#include <iostream>

using namespace std;

void PassByValue(int num) {
	cout << "Inside PassByValue()" << endl;
	num += 50;
	cout << "num = " << num << endl;
}

void PassByRef(int &num) {
	cout << "Inside PassByRef()" << endl;
	num = 50;
	cout << "num = " << num;
}