// Copyright (c) 2019 St. Mother Teresa HS All rights reserved

// Created by: Jaeyoon
// Created on: Oct 2019
// This program calculates the surface area of sphere
//     with user input

#include <iostream>
#include <cmath>

int main() {
    // this function calculates the surface area of sphere
    int radius;

    // input
    std::cout << "Enter the radius of sphere (m): ";
    std::cin >> radius;

    //output
    std::cout << "" << std::endl;
    std::cout << "Surface area is " << 4*M_PI*pow(radius, 2) << " m^2" << std::endl;
}
