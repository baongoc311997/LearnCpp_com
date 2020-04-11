#include <iostream>
#include "constants.h"

//Question#3

//int main()
//{
//    std::cout << "Hello World!\n";
//
//	double num1{}, num2{};
//	std::cout << "Enter a double value: ";
//	std::cin >> num1;
//	std::cout << "Enter a double value: ";
//	std::cin >> num2;
//	
//	char operat{};
//	std::cout << "Enter one of the following: +, -, *, or /: ";
//	std::cin >> operat;
//	
//	double result{};
//	if (operat == '+') result = num1 + num2;
//	else if (operat == '-') result = num1 - num2;
//	else if (operat == '*') result = num1 * num2;
//	else if (operat == '/') result = num1 / num2;
//	else return 0;
//
//	std::cout << num1 << " " << operat << " " << num2 << " is " << result;
//	return 0;
//}

//Question#4

double getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double towerHeight{};
	std::cin >> towerHeight;
	return towerHeight;
}

double calculateHeight(double towerHeight, int seconds)
{
	double distanceFallen{ (gravity*(seconds*seconds)) / 2.0 };
	double currentHeight{ towerHeight - distanceFallen };

	return currentHeight;
}

void printHeight(double height, double seconds)
{
	if (height > 0)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

void calculateAndPrintHeight(double towerHeight, int seconds)
{
	double height{ calculateHeight(towerHeight,seconds) };
	printHeight(height, seconds);
}

int main()
{
	const double towerHeight{ getTowerHeight() };

	calculateAndPrintHeight(towerHeight, 0);
	calculateAndPrintHeight(towerHeight, 1);
	calculateAndPrintHeight(towerHeight, 2);
	calculateAndPrintHeight(towerHeight, 3);
	calculateAndPrintHeight(towerHeight, 4);
	calculateAndPrintHeight(towerHeight, 5);

	return 0;

}
