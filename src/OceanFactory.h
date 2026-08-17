#ifndef OCEANFACTORY_H
#define OCEANFACTORY_H
#include "BiomeFactory.h"
#include "Settlement.h"
#include <vector>
#include <string>

class OceanFactory : public BiomeFactory {
private:

int cityIdx = 0;
const std::vector<std::string> cityNames = {
    "Tidehaven",
    "Coralreach",
    "Brinewatch",
    "Stormhaven",
    "Abyssal Reach"
};

const std::vector<std::string> cityEnter = {
    // 1. Tidehaven
    "Standing on the sea-swept cliffs of Tidehaven, the cold ocean spray kissed my face as salt-crusted ships glided into the natural stone harbor. The city felt warm and inviting despite the rough waters, its whitewashed stone buildings glowing under the setting sun as lighthouse beacons flickered to life against the tide.",

    // 2. Coralreach
    "Approaching Coralreach, I was mesmerized by the iridescent pink and turquoise towers woven directly out of living barrier reefs and giant sea-glass. Walking the shallow, water-filled causeways, I could feel the gentle surge of the tide around my ankles as colorful marine life darted beneath transparent bridges.",

    // 3. Brinewatch
    "Brinewatch towered grimly over the jagged black crags, a fortress city etched by centuries of gale-force winds and sea salt. As I walked its iron-gated sea walls, the thunderous crash of waves against the lower bastion echoed like war drums, giving me a chilling sense of unyielding defense against the sea.",

    // 4. Stormhaven
    "Stepping into Stormhaven, the air smelled heavily of rain, ozone, and wet timber from the bustling docks. Lightning crackled across the dark horizon, but within the city's massive stone breakwaters and sheltered sea-caves, rowdy taverns roared with laughter and warmth, offering true sanctuary from the raging ocean storm.",

    // 5. Abyssal Reach
    "Descending the dark, barnacle-encrusted stairs into Abyssal Reach, a cold dread crept up my spine. Built into a colossal trench where the ocean meets a subterranean chasm, the city glowed with eerie, bioluminescent lamps, and the deep ocean currents hummed like a slumbering leviathan in the dark below."
};

int foodIdx = 0;

const std::vector<std::string> foodNames = {
    "Brine-Cured Kraken Tentacle",
    "Pearl-Oyster Chowder",
    "Glow-Kelp Roll",
    "Seafire Spiced Crab",
    "Tide-Crusted Sea Bass"
};

// First-Person Impressions (Atmosphere & Experience)
const std::vector<std::string> foodEat = {
    // 1. Brine-Cured Kraken Tentacle
    "Sitting in a drafty harbor tavern, a platter bearing a thick, charred segment of Kraken tentacle was set down before me. The meat was surprisingly tender beneath its sea-salt crust, releasing a rich, smoky savoriness with a sharp citrus bite that left a tingling warmth on my tongue.",

    // 2. Pearl-Oyster Chowder
    "Drawn in by the steam rising from a dockside vendor's iron kettle, I cradled a wooden bowl of velvety Pearl-Oyster Chowder. The creamy, saffron-tinted broth was packed with sweet, tender shellfish and salted sea-herbs, warming my chilled bones against the damp ocean fog.",

    // 3. Glow-Kelp Roll
    "At a night market stall overlooking the docks, I sampled a translucent Glow-Kelp Roll that emitted a faint, bioluminescent blue light. Wrapped in crisp, salted seaweed and filled with spiced raw tuna, every bite delivered a fresh, mineral crispness that tasted of the deep ocean.",

    // 4. Seafire Spiced Crab
    "The noisy feast hall was filled with the cracking of shells and the pungent aroma of pepper and sea salt. Using a brass mallet, I broke into a massive Seafire Spiced Crab, savoring the succulent white meat drenched in a scorching, garlic-infused butter sauce that set my mouth pleasantly ablaze.",

    // 5. Tide-Crusted Sea Bass
    "Served on a wide palm leaf at an open-air seaside pavilion, the Tide-Crusted Sea Bass arrived whole, baked beneath a hardened shell of ocean salt and dried kelp. Flaking off the delicate white meat revealed a tender, herb-stuffed fillet that practically melted on my palate."
};
int lodgingIdx = 0;

const std::vector<std::string> lodgingNames = {
    "The Salt-Spun Inn",
    "The Leviathan's Rest",
    "Coral-Glow Haven",
    "Brine-Cliff Lodge",
    "The Drifting Lantern"
};

// First-Person Impressions (Atmosphere & Experience)
const std::vector<std::string> lodgingSleep = {
    // 1. The Salt-Spun Inn
    "Stepping into the sea-weathered foyer of The Salt-Spun Inn, the creak of floorboards felt like the rhythm of a ship at sea. The room was draped in sun-bleached driftwood and woven sailcloth, and as I sank into the feather mattress, the rhythmic crashing of surf against the pilings below lulled me into a deep, dreamless sleep.",

    // 2. The Leviathan's Rest
    "Housed inside the hollowed, petrified ribcage of an ancient sea creature, The Leviathan's Rest felt equal parts grand and eerie. Lanterns cast flickering shadows across the massive bone arches above my bed, while the damp sea air drifting through the iron-shuttered balcony carried the distant song of pelicans.",

    // 3. Coral-Glow Haven
    "Tucked inside a natural cavern beneath the tide line, Coral-Glow Haven offered a view unlike any other. Light filtered into my chamber through thick glass viewports framed by glowing coral reefs, filling the room with a tranquil blue luminescence as tide-pools rippled softly outside.",

    // 4. Brine-Cliff Lodge
    "Perched precariously over the roaring sea on a jagged outcrop of rock, Brine-Cliff Lodge shook gently under every heavy gust of wind. Sitting beside my room’s roaring stone hearth, I watched through salt-crusted windows as gale-force waves shattered against the cliffs far below.",

    // 5. The Drifting Lantern
    "Climbing aboard a converted three-masted schooner tethered permanently to the harbor piers, I made my way down into my private cabin. The space was cozy, smelling faintly of old teakwood, tar, and pipe tobacco, rocking gently with the harbor swell as ambient lanterns swayed lazily on brass hooks."
};

int marketIdx = 0;

const std::vector<std::string> marketNames = {
    "The Tidepool Bazaar",
    "Pearl-Harbor Exchange",
    "Siren’s Cove Market",
    "Scavenger's Quay",
    "Gale-Tide Fair"
};

// First-Person Impressions (Atmosphere & Experience)
const std::vector<std::string> marketShop = {
    // 1. The Tidepool Bazaar
    "Stepping onto the wet wooden docks of The Tidepool Bazaar, I had to dodge merchants hawking shimmering rows of deep-sea pearls, glistening crustacean shells, and tanks of luminescent jellyfish. The air buzzed with bartering shouts, wet canvas, and the pungent, unmistakable tang of raw salt and fish scales.",

    // 2. Pearl-Harbor Exchange
    "Beneath the massive timber arches of the Pearl-Harbor Exchange, the crowd surged in a colorful wave of sailors and divers. I brushed past stalls draped in iridescent fish-scale mantles, smelling the heavy, sweet musk of whale-oil lamps and exotic spices traded from distant southern archipelagos.",

    // 3. Siren’s Cove Market
    "Winding through the cliffside terraces of Siren’s Cove Market, the merchants displayed their wares on flat rocks smoothed by the tide. I paused by a stall draped in sun-dried kelp nets, admiring finely carved scrimshaw daggers and glass vials filled with swirling, phosphorescent ocean extracts.",

    // 4. Scavenger's Quay
    "The chaotic atmosphere of Scavenger's Quay smelled of rusted iron, tar, and rotting driftwood. Picking my way through heaps of salvaged shipwrecks and barnacle-encrusted anchors, I watched merchants aggressively auction off weather-beaten compasses, brass sextants, and strange wreckage dragged up from the deep trench.",

    // 5. Gale-Tide Fair
    "Spread across the wide cobblestone piers, the Gale-Tide Fair was alive with the sound of concertinas, clinking tankards, and sea shanties. I wove through rows of canvas tents fluttering fiercely in the ocean breeze, smelling roasting salt-meats and marveling at woven blankets dyed deep sea-blue with squid ink."
};


int workIdx = 0;
const std::vector<std::string> jobNames = {
    "Deep-Diver",
    "Harbor-Master",
    "Tide-Salvager",
    "Brine-Carver",
    "Lighthouse-Keeper"
};

// First-Person Impressions (Atmosphere & Experience)
const std::vector<std::string> jobsWork = {
    // 1. Deep-Diver
    "Submerged in the freezing, pitch-black water, the heavy brass helmet pressed against my shoulders as my lungs fought the stifling air inside. The work was nerve-wracking—blindly feeling through jagged, barnacle-encrusted hulls for sunken gold while watching for dark, sinuous shapes drifting silently in the abyss.",

    // 2. Harbor-Master
    "From the top of the stone watchtower, the deafening roar of sea horns and shouting captains echoed across the crowded docks. My fingers were stained dark with ink and sea salt as I logged arriving merchant galleons, navigated tight berth assignments, and kept tempers from flaring in the chaotic harbor traffic.",

    // 3. Tide-Salvager
    "Trudging through the mudflats at low tide, the cold salt wind whipped across my face as I scavenged the wreckage spit out by the storm. My back ached from hauling barnacle-covered copper plating and tangled ropes, constantly keeping one eye on the horizon before the rushing tide cut off my return.",

    // 4. Brine-Carver
    "Inside my cramped dockside shop, the sharp smell of bone dust and whale oil filled the air. My hands grew steady and callous as I guided small steel chisels across leviathan teeth and drift-timber, carving intricate maps and protective nautical runes for superstitious sea captains.",

    // 5. Lighthouse-Keeper
    "Standing high above the crashing waves inside the lantern room, the intense heat of the brass oil lamp warmed the damp midnight air. The work was relentless—pacing the cold stone stairs, polishing heavy glass lenses, and keeping the blinding beam turning through dense sea fog to guide lost ships away from the jagged reefs."
};
public:
	Settlement* createCity();
	Settlement* createWork();
	Settlement* createFood();
	Settlement* createLodging();
	Settlement* createMarket();
};

#endif
