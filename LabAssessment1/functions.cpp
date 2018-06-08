#include "Header.h"
#include <iostream>

void PassByValue(int num) {
	std::cout << "Inside PassByValue()" << std::endl;
	num += 50;
	std::cout << "num = " << num << std::endl;
}

void PassByRef(int &num) {
	std::cout << "Inside PassByRef()" << std::endl;
	std::cout << "received value is : " << num << std::endl;
	num = 50;
	std::cout << "num = " << num<<std::endl;
}