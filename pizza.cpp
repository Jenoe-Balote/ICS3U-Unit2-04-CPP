// Copyright (c) 2021 Jenoe Balote All rights reserved
//
// Created by Jenoe Balote
// Created on April 2021
// This program calculates the cost of pizza

#include <iostream>
#include <iomanip>

int main() {
    // this function calculates the cost of a pizza
    const float RENT = 1;
    const float LABOUR = 0.75;
    const float COST_PER_INCH = 0.5;
    const float HST = 0.13;

    float diameter;
    float sub_total;
    float total;

    // input
    std::cout << "Enter the diameter of the pizza you want(inch): ";
    std::cin >> diameter;

    // process
    sub_total = RENT + LABOUR + (diameter * COST_PER_INCH);
    total = sub_total * (1 + HST);

    // output
    std::cout << "" << std::endl;
    std::cout << "The total cost is: $" << std::fixed
    << std::setprecision(2) << std::setfill('0') << total <<std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
