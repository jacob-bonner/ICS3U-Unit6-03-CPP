// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: Decemeber 2019
// This program finds the largest number in an array

#include <iostream>
#include <ctime>
#include <array>

template<size_t N>
int Calculate(std::array<int, N> arrayOfNumbers) {
    // This function finds the largest number in a list

    // Variables and arrays
    int smallNumber = 1000;

    // Process
    for (int counter : arrayOfNumbers) {
        if (counter < smallNumber) {
            smallNumber = counter;
        }
    }

    // Output
    return smallNumber;
}

int main() {
    // This function creates an array of 10 numbers then prints out the largest

    // Random number seed
    unsigned int seed = time(NULL);

    // Variables and arrays
    int randomNumber;
    int smallestNumber;
    std::array<int, 10> numberArray;

    // Adding numbers to an array
    for (int counter = 0; counter < 10; counter++) {
        randomNumber = rand_r(&seed) % 100;
        std::cout << randomNumber << std::endl;
        numberArray[counter] = randomNumber;
    }

    // Process
    smallestNumber = Calculate(numberArray);

    // Output
    std::cout << "" << std::endl;
    std::cout << "The largest number in the array is " \
              << smallestNumber << std::endl;
}
