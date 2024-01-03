// OpenDriveParser.cpp
#include "OpenDriveParser.h"
#include "tinyxml2.h"
#include <iostream>


void OpenDriveParser::ParseFile(const std::string& file_path) {
    tinyxml2::XMLDocument doc;
    tinyxml2::XMLError eResult = doc.LoadFile(file_path.c_str());
    if (eResult != tinyxml2::XML_SUCCESS) {
        std::cerr << "Error loading XML file: " << file_path << std::endl;
        return;
    }

    tinyxml2::XMLElement* root = doc.RootElement();
    if (root == nullptr) {
        std::cerr << "Error: No root element in XML file" << std::endl;
        return;
    }

    ParseRoads(root);
}

void OpenDriveParser::ParseRoads(tinyxml2::XMLElement* root) {
    tinyxml2::XMLElement* roadElement = root->FirstChildElement("road");
    while (roadElement != nullptr) {
        Road road;
        road.id = roadElement->IntAttribute("id");
        road.length = roadElement->DoubleAttribute("length");
        // Parse other attributes and child elements

        roads.push_back(road); // Assuming roads is a std::vector<Road> member of OpenDriveParser

        roadElement = roadElement->NextSiblingElement("road");
    }
}

// In OpenDriveParser.cpp
void OpenDriveParser::PrintParsedData() const {
    for (const auto& road : roads) {
        road.PrintDetails();
    }
}