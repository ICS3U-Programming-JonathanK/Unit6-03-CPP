// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan Kene
// Created on: June 14, 2021
// The program places the numbers into a single variable
// and prints them to the console. After the array is full, your program
// calculates the average of all the numbers and displays it.

#include <time.h>
#include <iostream>
#include <array>


template<size_t N>
int FindMinValue(std::array<int, N> listOfNumbers) {
    // this functions add up all the numbers in the list
    int minimum = 101;

    for (int number = 0; number < listOfNumbers.size(); number++) {
        if (listOfNumbers[number] < minimum) {
            minimum = listOfNumbers[number];
        }
    }
    return minimum;
}

main() {
    // this function uses an array

    const int MAX_ARRAY_SIZE = 11;
    int array[MAX_ARRAY_SIZE];
    const int MIN_NUM = 10;
    const int MAX_NUM = 100;
    std::array<int, 10> randomNumbers;
    int aSingleRandomNumber = 0;
    int minValue = 0;

    srand(time(NULL));

    // uses a for loop

    for (int loop_number = 0; loop_number < 11; loop_number++) {
        aSingleRandomNumber = (rand() % MAX_NUM) + MIN_NUM;
        randomNumbers[loop_number] = aSingleRandomNumber;
        std::cout << aSingleRandomNumber  <<
                    " added to the list "
                    "at position " << loop_number << std::endl;
    }
    std::cout << " " << std::endl;

    // displays the minimum value
    minValue = FindMinValue(randomNumbers);

    std::cout << "The min value is: " << minValue << std::endl;
}
