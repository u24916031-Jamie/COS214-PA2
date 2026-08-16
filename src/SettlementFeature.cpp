#include "SettlementFeature.h"

void SettlementFeature::getName() {
	if (settlement == nullptr) {
		return;
	}
	settlement->getName();
}

void SettlementFeature::getDescription() {
	if (settlement == nullptr) {
		return;
	}
	settlement->getDescription();
}

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
