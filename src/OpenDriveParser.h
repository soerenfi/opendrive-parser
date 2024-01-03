// OpenDriveParser.h
#pragma once
#include <string>
#include <vector>

#include "models/Road.h"
#include "tinyxml2.h"
// Other model includes as necessary

class OpenDriveParser {
 public:
  void ParseFile(const std::string &file_path);
  // Other methods as needed
  void PrintParsedData() const;

 private:
  void ParseRoads(tinyxml2::XMLElement *root);
  // Other helper methods for parsing different elements

  std::vector<Road> roads;  // Vector to store parsed roads
};
