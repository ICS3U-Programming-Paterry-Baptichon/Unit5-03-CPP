// Copyright (c) 2022 Paterry Baptichon All rights reserved

// Created by Paterry Baptichon
// Created on 2022-05-18
// This program takes the level of grade and returns the middle percentage mark

#include <iostream>
#include <string>

int gradeCalculator(std::string gradeString) {
    // this function converts the levels to percentage mark
    int grade;

    if (gradeString == "4+") {
        grade = 97;
    } else if (gradeString == "4") {
        grade = 90;
    } else if (gradeString == "4-") {
        grade = 83;
    } else if (gradeString == "3+") {
        grade = 78;
    } else if (gradeString == "3") {
        grade = 75;
    } else if (gradeString == "3-") {
        grade = 71;
    } else if (gradeString == "2+") {
        grade = 68;
    } else if (gradeString == "2") {
        grade = 65;
    } else if (gradeString == "2-") {
        grade = 61;
    } else if (gradeString == "1+") {
        grade = 58;
    } else if (gradeString == "1") {
        grade = 55;
    } else if (gradeString == "1-") {
        grade = 51;
    } else if (gradeString == "R") {
        grade = 30;
    } else {
        return -1;
    }

    return grade;
}


main() {
    // this function gets length and width
    int completedGradeCalculator;
    std::string gradeString;

    // input of the user's grade
    std::cout << "Enter a grade level that you want to convert it into"
              << " a percentage: ";
    std::cin >> gradeString;
    std::cout << std::endl;

    // call functions
    completedGradeCalculator = gradeCalculator(gradeString);


    // output of the user's grade level converted
    if (completedGradeCalculator == -1) {
        std::cout << "Level " << gradeString << " is not a valid level."
                             << std::endl;
    } else {
        std::cout << "Level " << gradeString << " has a middle percentage of "
                             << completedGradeCalculator << "%" << std::endl;
    }
}
