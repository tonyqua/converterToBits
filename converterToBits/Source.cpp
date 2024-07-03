#include <iostream>


int printAndDecrementBit(int x, int pow) {
	if (x >= pow) {
		std::cout << "1";
	}
	else {
		std::cout << "0";
	}

	if (x >= pow) {
		return x - pow;
	}
	else {
		return x;
	}
}


int main() 
{
	std::cout << "Enter a number from 0 to 255: ";
	int x;
	std::cin >> x;
	int bits[] = { 128, 64, 32, 16, 8, 4, 2, 1 };

	for (int i = 0; i < 4; ++i) {
		x = printAndDecrementBit(x, bits[i]);
	}

	std::cout << " ";

	for (int i = 4; i < 8; ++i) {
		x = printAndDecrementBit(x, bits[i]);
	}


	return 0;
}