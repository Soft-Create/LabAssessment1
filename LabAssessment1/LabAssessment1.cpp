// LabAssessment1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Header.h"
#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string _name{};
	int _age;
	double _height, _weight;

public:
	//Constructor
	Person(string name, int age, double height, double weight) {
		_name = name;
		_age = age;
		_height = height;
		_weight = weight;
	}

	//getter functions
	string getName() {
		return _name;
	}

	int getAge() {
		return _age;
	}

	double getHeight() {
		return _height;
	}

	double getWeight() {
		return _weight;
	}

	//setter functions
	void setName(string name) {
		_name = name;
	}
	void setAge(int age) {
		_age = age;
	}
	void setHeight(double height) {
		_height = height;
	}
	void setWeight(double weight) {
		_weight = weight;
	}

};

void ModifyPerson(Person *);

//using namespace std;
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
	cout << "*pNum = " << *pNum << endl;

	cout << endl << "Passing num1 by value" << endl;
	PassByValue(num1);
	cout << "main()" << endl;
	cout << "num1 = " << num1 << endl;

	cout << endl << "Passing *pNum by reference" << endl;
	cout << "Value at *pNum = " << *pNum << endl;
	PassByRef(*pNum);
	cout << "main()" << endl;
	cout << "Value at *pNum = " << *pNum << endl;

	cout << endl << "Passing *pNum by value." << endl;
	/*Severity	Code	Description	Project	File	Line	Suppression State
	Error(active)	E0167	argument of type "int *" is incompatible with parameter of type "int"	
	PassByValue(pNum);*/

	double *pDbl{ NULL };
	pDbl = new double;
	*pDbl = 3.1415F;

	cout << "The value of double variable is : " << *pDbl << endl;

	delete pDbl;

	/*Unhandled exception thrown : read access violation.
		pDbl was 0x8123.*/
	//cout << "Value at pointer after deallocation : " << *pDbl << endl;

	Person *person=new Person( "Ayush Mitra",21,5.5,74.4 );

	cout << "Name : " << person->getName() << endl;
	cout << "Age : " << person->getAge() << endl;
	cout << "Height : " << person->getHeight() << endl;
	cout << "Weight : " << person->getWeight() << endl;

	cout << "\nCALLING ModifyPerson()" << endl;
	ModifyPerson(person);
	cout << "\nName : " << person->getName() << endl;

	return 0;
}

void ModifyPerson(Person *person) {
	person->setName("Sidharth Singh");
}