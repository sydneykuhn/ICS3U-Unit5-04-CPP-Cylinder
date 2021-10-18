// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Oct 2020
// This program converts a percentage to a level mark

#include <iostream>
#include <string>
#include <cmath>

float CalculateVolume(float radius, float height) {
    // calculate volume
    float volume;

    // process
    volume = M_PI * (radius * radius) * height;

    // output
    return volume;
}

int main() {
    // this function gets the user input

    std::string radiusAsString;
    std::string heightAsString;
    float radiusFromUser;
    float heightFromUser;
    float calculatedVolume;
    // input
    std::cout << "The radius of a cylinder is (cm) : ";
    std::cin >> radiusAsString;
    std::cout << "The height of a cylinder is (cm) : ";
    std::cin >> heightAsString;
    try {
        radiusFromUser = std::stof(radiusAsString);
        heightFromUser = std::stof(heightAsString);
        // call functions
        calculatedVolume = CalculateVolume(radiusFromUser, heightFromUser);
        std::cout << "\nThe volume of a cylinder with " << radiusFromUser
        << " cm radius and " << heightFromUser << " cm height is "
        << calculatedVolume << " cm³." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid number entered, please try again." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
