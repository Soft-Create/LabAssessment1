#include "Header.h"
#include <iostream>

void PassByValue(int num) {
	std::cout << std::endl<<"INSIDE PassByValue() :" << std::endl;
	std::cout << "Received value is : " << num << std::endl;
	num += 50;
	std::cout << "num = " << num << std::endl;
}

void PassByRef(int &num) {
	std::cout << std::endl << "INSIDE PassByRef() :" << std::endl;
	std::cout << "Received value is : " << num << std::endl;
	num = 50;
	std::cout << "num = " << num << std::endl;
}