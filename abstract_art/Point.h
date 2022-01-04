//
// Created by Uwe Hoffmann on 1/3/22.
//

#ifndef ABSTRACT_ART_POINT_H
#define ABSTRACT_ART_POINT_H

class Point {
public:
    explicit Point(double x, double y) : x_{x}, y_{y} {}

    double AreaWith(const Point& other) const noexcept;
private:
    double x_;
    double y_;
};

#endif //ABSTRACT_ART_POINT_H
