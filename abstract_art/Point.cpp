//
// Created by Uwe Hoffmann on 1/3/22.
//

#include "Point.h"

double Point::AreaWith(const Point& other) const noexcept {
  return 0.5 * (x_ * other.y_ - y_ * other.x_);
}