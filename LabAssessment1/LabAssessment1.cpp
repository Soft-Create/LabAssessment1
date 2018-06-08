// LabAssessment1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Header.h"
#include  <iostream>

using namespace std;

int main()
{
	int num1 = 3;
	int *ptr{ NULL };
	int *pNum{ NULL };
	ptr = &num1;
	pNum = new int;  //This is required as *pNum points to NULL. NULL cannot be written to in most systems.
	*pNum = 5;
	cout << "main()" << endl;
	cout << "num1 = " << num1 << endl;
	PassByValue(num1);
	cout << "main()" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "Value at *pNum = " << num1 << endl;
	PassByRef(*pNum);
	cout << "main()" << endl;
	cout << "Value at *pNum = " << num1 << endl;
	PassByValue(*pNum);
	cout << "main()" << endl;
	cout << "Value at *pNum = " << num1 << endl;
	return 0;
}