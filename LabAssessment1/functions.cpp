#include <iostream>
#include "Header.h"

void PassByValue(int num) {
	std::cout << "Inside PassByValue()" << std::endl;
	num += 50;
	std::cout << "num = " << num << std::endl;
}

void PassByRef(int &num) {
	std::cout << "Inside PassByRef()" << std::endl;
	num = 50;
	std::cout << "num = " << num<<std::endl;
}