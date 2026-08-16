#include "Place.h"

Place::Place() {
	this->name = "";
	this->description = "";
	this->m_isSettlement = false;
}

Place::Place(std::string name, std::string description, bool isSettlement) {
	this->name = name;
	this->description = description;
	this->m_isSettlement = isSettlement;
}

std::string Place::getName() {
	return this->name;
}

std::string Place::getDescription() {
	return this->description;
}

bool Place::isSettlement() {
	return m_isSettlement;
}
