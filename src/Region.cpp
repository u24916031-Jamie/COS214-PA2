#include "Region.h"

Region::Region(std::string name, std::string description) : Place(name, description, false) {}

void Region::addPlace(Place* param) {
	children.push_back(param);
}

std::vector<Place*>& Region::getChildren() {
	return children;
}

Region::~Region() {
	for (const Place*& child : children) {
		if (child != nullptr) {
			delete child;
			child = nullptr;
		}
	}
}
