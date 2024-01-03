// Road.h
#pragma once
#include <iostream>
#include <vector>

#include "LaneSection.h"

class Road {
 public:
  int id;
  double length;
  double speedLimit;
  std::vector<LaneSection> laneSections;
  // Additional properties like junction reference, road type, etc.

  // Constructor, getters, setters, and other methods as needed

  void PrintDetails() const {
    std::cout << "Road ID: " << id << "\n";
    std::cout << "Length: " << length << "\n";
    std::cout << "Speed Limit: " << speedLimit << "\n";
    // Print other attributes
    // for (const auto& laneSection : laneSections) {
    //     laneSection.PrintDetails();
  }
};