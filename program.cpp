// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This program program uses a list

#include <iostream>
#include <list>


main() {
    // this function uses a list

    std::list<int> numbers;
    std::string integer1;
    std::list<int> reversedNumbers;
    float number;
    float total = 0;

    // input
    std::cout << "Please enter 1 number at a time. Enter 'Stop' to end.";
    std::cout << std::endl;

    std::cout << "" << std::endl;
    while (integer1 != "Stop") {
        std::cout << "Enter number to add: ";
        std::cin >> integer1;
        try {
            number = std::stof(integer1);
            numbers.push_back(number);
        } catch (std::invalid_argument) {
            if (integer1 == "Stop") {
               numbers.push_back(number);
            } else {
                std::cout << "Invalid input" << std::endl;
            }
        }
    }
    numbers.pop_back();   // remove the "Stop" that was added

    // reversed words
    for (int number2 : numbers) {
        reversedNumbers.push_front(number2);
        total = total + number2;
    }

    std::cout << "" << std::endl;
    std::cout << "The sum is " << total << std::endl;

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
