#include <iostream>

int valueToPowerX(int value, int power) {
	int result{ 1 };

	for (int i = 0; i < power; i++) 
	{
		result *= value;
	}

	return result;
}

int main() {

	int value{ 5 };
	int power{ 2 };

	std::cout << value << " to power " << power << " = " << valueToPowerX(value, power) << std::endl;

	value = 3;
	power = 3;

	std::cout << value << " to power " << power << " = " << valueToPowerX(value, power) << std::endl;

	value = 4;
	power = 4;

	std::cout << value << " to power " << power << " = " << valueToPowerX(value, power) << std::endl;



	return 0;
}