// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: October 2019
// This program calculates volume of a cylinder.


#include <iostream>
#include <cmath>

void calculate_volume(float radius, float height) {
    // calculate volume
    float volume;

    // process
    volume = M_PI * (radius * radius) * height;

    // output
    std::cout << "The volume is " << volume << "cm^3" << std::endl;
}


main() {
    // this function gets radius and width

    std::string radius_as_string;
    float radius;
    std::string height_as_string;
    float height;

    try {
        // input
        std::cout << "Enter the radius of a cylinder (cm): " << std::endl;
        std::cin >> radius_as_string;
        radius = std::stof(radius_as_string);
        std::cout << "Enter the height of a cylinder (cm): " << std::endl;
        std::cin >> height_as_string;
        height = std::stof(height_as_string);
        std::cout << std::endl;

        // call functions
        calculate_volume(radius, height);
    } catch(std::invalid_argument) {
        std::cout << "That was not a valid number." << std::endl;
}
}
