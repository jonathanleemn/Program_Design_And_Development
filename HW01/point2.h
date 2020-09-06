// Copyright 2018 <Jonathan Lee>

#ifndef HW01_POINT2_H_
#define HW01_POINT2_H_
#include <iostream>

class Point2 {
 public:
    Point2(float x, float y);
    Point2();
    virtual ~Point2();

    float DistanceBetween(Point2);
    float get_X_Coord();
    float get_Y_Coord();

 private:
    float XCoord;
    float YCoord;
};

#endif  // HW01_POINT2_H_
