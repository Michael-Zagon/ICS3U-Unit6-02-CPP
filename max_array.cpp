// Copyright (c) 2021 Michael Zagon All rights reserved

// Created by: Michael Zagon
// Created on: October 2021
/* This program finds the largest number is an array of 
randomly generated numbers*/

#include <iostream>
#include <random>
#include <array>

template<size_t N>
int findingNumber(std::array<int, N> randomList) {
    // This function finds the largest number
    int largestNumber;

    for (int counter = 0; counter < randomList.size(); counter++) {
        if (randomList[counter] > largestNumber) {
            largestNumber = randomList[counter];
        }
    }
    return largestNumber;
}


int main() {
    std::array<int, 10> generatedRandomList;
    int randomNumber;
    int biggestNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 100);

    std::cout << "Here is a list of random numbers:" << std::endl;
    std::cout << "" << std::endl;

    for (int counter = 0; counter < 10; counter++) {
        randomNumber = idist(rgen);
        generatedRandomList[counter] = randomNumber;
        std::cout << "The random number " << counter + 1 <<
        " is: " << randomNumber << std::endl;
    }
    biggestNumber = findingNumber(generatedRandomList);

    std::cout << "" << std::endl;
    std::cout << "The largest number is " << biggestNumber << std::endl;

    std::cout << "\nDone." << std::endl;
}
