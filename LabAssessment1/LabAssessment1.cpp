// LabAssessment1.cpp : Defines the entry point for the console application.
//

#include  <iostream>

using namespace std;

void PassByValue(int);
void PassByRef(int &);

int main()
{
	int num1 = 3;
	int *ptr{ NULL }, *pNum{ nullptr };
	ptr = &num1;
	*pNum = 5;
	PassByValue(num1);
	cout << "main()" << endl;
	cout << "num1 = " << num1 << endl;
	PassByRef(num1);
	cout << "main()" << endl;
	cout << "num1 = " << num1 << endl;
	return 0;
}

