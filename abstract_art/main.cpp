#include <iostream>
#include <iomanip>
#include <utility>
#include <vector>

#include "Point.h"
#include "Polygon.h"

void ReadInput(std::vector<Polygon>& polygons) {
  int num_polygons;

  std::cin >> num_polygons;
  for (int i = 0; i < num_polygons; ++i) {
     int num_points;
     std::cin >> num_points;

     auto points = std::make_unique<std::vector<Point>>();

     for (int j = 0; j < num_points; ++j) {
       double x, y;
       std::cin >> x;
       std::cin >> y;
       points->emplace_back(x, y);
     }

     polygons.emplace_back(std::move(points));
  }
}

int main() {
  std::vector<Polygon> polygons;
  ReadInput(polygons);

  double total_area = 0.0;
  for (const Polygon& polygon : polygons) {
    total_area += polygon.Area();
  }

  std::cout << std::fixed << std::setprecision( 8 )
            << std::setfill( '0' ) << total_area << std::endl;
  return 0;
}
