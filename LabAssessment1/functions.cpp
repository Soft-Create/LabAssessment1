#include <iostream>
void PassByRef(int &num)
{
	std::cout << "Inside PassByRef()" << std::endl;
}
int PassByValue(int num) {
	std::cout << "Inside PassByValue()" << std::endl;
	num *= 5;
	std::cout << "The modified value is :" << num;
	return num;
}