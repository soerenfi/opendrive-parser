// src/main.cpp
#include <iostream>

#include "OpenDriveParser.h"

int main() {
  OpenDriveParser parser;
  std::string filePath = "data/Town01.xodr";

  parser.ParseFile(filePath);

  parser.PrintParsedData();
  return 0;
}
