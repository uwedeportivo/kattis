//
// Created by Uwe Hoffmann on 1/3/22.
//

#ifndef ABSTRACT_ART_POLYGON_H
#define ABSTRACT_ART_POLYGON_H

#include <utility>
#include <vector>

#include "Point.h"

class Polygon {
public:
    explicit Polygon(std::unique_ptr<std::vector<Point>> points) : points_{std::move(points)} {}

    double Area() const noexcept;
private:
    std::unique_ptr<std::vector<Point>> points_;
};


#endif //ABSTRACT_ART_POLYGON_H
