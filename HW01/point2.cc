// Copyright 2018 <Jonathan Lee>
#include "HW/HW01/point2.h"

#include <math.h>
#include <iostream>

Point2::Point2(float x, float y) {
    XCoord = x;
    YCoord = y;
}

Point2::Point2() {
    XCoord = 0;
    YCoord = 0;
}

Point2::~Point2() {
    std::cout << "Destructor" << std::endl;
}


float Point2::get_X_Coord() {
    return XCoord;
}

float Point2::get_Y_Coord() {
    return YCoord;
}

float Point2::DistanceBetween(Point2 p) {
    return sqrt(pow(p.get_X_Coord()-XCoord, 2.0) +
                pow(p.get_Y_Coord() - YCoord, 2.0));
}
