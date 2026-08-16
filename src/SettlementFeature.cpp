#include "SettlementFeature.h"


SettlementFeature::SettlementFeature(std::string name, std::string description) : Settlement(name, description) {}

void SettlementFeature::addSettlement(Settlement* param) {
	if (settlement == nullptr) {
		settlement = param;
	}
	else {
		settlement->addSettlement(param);
	}
}

void SettlementFeature::enter(Traveller& traveller) {
	if (settlement == nullptr) {
		return;
	}
	else {
		settlement->enter(traveller);
	}
}

void SettlementFeature::shop(Traveller& traveller) {
	if (settlement == nullptr) {
		return;
	}
	else {
		settlement->enter(traveller);
	}
}

void SettlementFeature::sleep(Traveller& traveller) {
	if (settlement == nullptr) {
		return;
	}
	else {
		settlement->enter(traveller);
	}
}

void SettlementFeature::work(Traveller& traveller) {
	if (settlement == nullptr) {
		return;
	}
	else {
		settlement->enter(traveller);
	}
}

void SettlementFeature::eat(Traveller& traveller) {
	if (settlement == nullptr) {
		return;
	}
	else {
		settlement->enter(traveller);
	}
}

SettlementFeature::~SettlementFeature() {
	if (settlement != nullptr) {
		delete settlement;
		settlement = nullptr;
	}
}
