//
// Created by Uwe Hoffmann on 1/3/22.
//

#include "Polygon.h"
#include "Point.h"

double Polygon::Area() const noexcept {
  double area = 0.0;

  std::size_t num_points = points_->size();

  for (std::size_t i = 0; i < num_points - 1; ++i) {
    area += (*points_)[i].AreaWith((*points_)[i+1]);
  }
  if (num_points > 1) {
    area += (*points_)[num_points-1].AreaWith((*points_)[0]);
  }
  if (area < 0) {
    area = -area;
  }
  return area;
}
