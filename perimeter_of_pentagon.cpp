// Copyright 2022 MTHS
// Author: Lucas DeBruyn
// This program calculates the perimeter of a pentagon
// with user input
#include <iostream>
int main() {
    // this function calculates perimeter
    int length_one;
    int length_two;
    int length_three;
    int length_four;
    int length_five;
    int perimeterOfPentagon;

    // input
    std::cout << "Enter length of the first side of the pentagon (cm): ";
    std::cin >> length_one;
    std::cout << "Enter length of the second side of the pentagon (cm): ";
    std::cin >> length_two;
    std::cout << "Enter length of the third side of the pentagon (cm): ";
    std::cin >> length_three;
    std::cout << "Enter length of the fourth side of the pentagon (cm): ";
    std::cin >> length_four;
    std::cout << "Enter length of the fifth side of the pentagon (cm): ";
    std::cin >> length_five;

    // process
    perimeterOfPentagon = length_one + length_two + length_three +
    length_four + length_five;

    // output

    std::cout << "Perimeter is " << perimeterOfPentagon << " cm." << std::endl;

    std::cout << "\nDone." << std::endl;
}
