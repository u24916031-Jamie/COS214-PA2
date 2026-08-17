#ifndef FORESTFACTORY_H
#define FORESTFACTORY_H

#include "BiomeFactory.h"
#include "Settlement.h"


class ForestFactory : BiomeFactory {
private:

// 1. City Names
int cityIdx = 0;
const std::vector<std::string> cityNames = {
    "Sylvanmere",
    "Canopy Reach",
    "Whisperwood Spire",
    "Eldergrove",
    "Verdant Apex"
};
const std::vector<std::string> cityEnter = {
    "Hearing the name Sylvanmere, I immediately picture an ancient, pristine refuge nestled beside a mist-shrouded canopy lake. The word rolls off the tongue with an elven elegance, making me feel as though I am stepping into a ancient realm of serene magic, crystal-clear waters, and timeless grace.",
    "Canopy Reach sounds like an ambitious frontier hub suspended high above the dangerous forest floor. It gives me the sudden, thrilling sensation of standing on a sway bridge tossed by the wind, looking out over endless miles of green ocean stretching toward the horizon.",
    "Whisperwood Spire instantly sends a chill down my spine; it feels deeply mystical and full of hidden secrets. I picture a looming tower of living, woven wood rising above the mist, where the wind through the leaves sounds like quiet voices sharing forgotten arcana.",
    "The name Eldergrove fills me with a sense of profound reverence and safety. It feels like the sacred, deeply rooted heart of the forest, where giant primeval trees have stood watch for centuries and druids gather to preserve the old traditions.",
    "Verdant Apex strikes me as the grand crown jewel of the treetops—a place of wealth, height, and breathtaking viewports. It makes me feel like I am arriving at the vibrant peak of forest civilization, where the sun shines brightest on gilded wooden spires."
};

int foodIdx = 0;

const std::vector<std::string> foods = {
    "Gladeberry Stew",
    "Ember-Roasted Acorns",
    "Silverleaf Bread",
    "Moss-Fermented Mead",
    "Dewdrop Nectar"
};

const std::vector<std::string> foodEat = {
    "Taking my first spoonful of Gladeberry Stew, the dark violet broth warmed me from the inside out with a rich blend of sweet, tart berries and earthy forest roots that tasted like a hearty autumn evening.",
    "Cracking open an Ember-Roasted Acorn, I was greeted by a smoky, nutty aroma that immediately reminded me of quiet nights spent gathered around a roaring campfire deep in the woods.",
    "A single bite of Silverleaf Bread offered a delicate, airy crunch with a subtle herbal sweetness, leaving a refreshing, mint-like aftertaste that cleared my mind almost instantly.",
    "Sipping the Moss-Fermented Mead, I felt a tangy, effervescent fizz on my tongue followed by a deep, damp-earth richness that warmed my chest with a uniquely wild, intoxicating kick.",
    "Drinking the Dewdrop Nectar felt like sipping pure liquid morning light—cool, crisp, and bursting with a delicate floral sweetness that instantly washed away my journey's exhaustion."
};

int lodgingIdx = 0;
const std::vector<std::string> lodgings = {
    "The Canopy Rest",
    "Moss-Weave Inn",
    "The Hollow Trunk",
    "High-Bough Haven",
    "Ironwood Lodge"
};

const std::vector<std::string> lodgingsSleep = {
    "Stepping into The Canopy Rest, I was immediately embraced by the gentle sway of the high boughs and the faint scent of crushed cedar. My room was a cozy loft of woven branches with a plush, moss-padded bed, offering an unobstructed, dizzying view through the lattice window of endless green sea rolling beneath the morning sun.",
    "The air inside Moss-Weave Inn felt delightfully cool and damp, thick with the earthy fragrance of living flora. The entire chamber was carpeted in a thick, velvety green blanket of soft moss that muffled my footsteps, lit by the warm blue luminescence of hanging fungi while soft lanterns framed a view of glowing forest pathways down below.",
    "Entering The Hollow Trunk felt like stepping into the ancient, beating heart of the giant redwood itself. Surrounded by smooth, dark heartwood walls polished by decades of travelers, the room felt safe and wonderfully secluded, with small amber-glass portholes revealing glimpses of the busy root-bridges outside.",
    " perched at the very precipice of the upper canopy, High-Bough Haven greeted me with a crisp, whistling breeze and an intoxicating sense of height. The room opened onto a private, open-air balcony that felt suspended in mid-air, offering a breathtaking, front-row seat to the golden sunrise spilling across the forest sky.",
    "Ironwood Lodge felt sturdy, rugged, and reassuringly solid amidst the swaying treetops, built from heavy, dark wood that resonated with a quiet warmth. The room featured a crackling stone hearth and heavy wool drapes, with a wide bay window looking out over the misty, rain-swept borderlands of the deep woods."
};

int marketIdx = 0;
const std::vector<std::string> markets = {
    "The Root Bazaar",
    "Twilight Canopy Exchange",
    "Whisper-Leaf Market",
    "Sun-Glade Fair",
    "Thorn & Thistle Emporium"
};

const std::vector<std::string> marketShop = {
    "Descending into the dim, damp cavern of The Root Bazaar, I was immediately wrapped in the rich scents of wet loam and pungent spices. Navigating the tangled wooden archways, my eyes locked onto a jar of glowing, violet moss tincture, and after a brief haggle, I walked away holding a softly pulsing light source for my trek ahead.",
    "Suspended high in the shadowy upper boughs, the Twilight Canopy Exchange felt like a secret nocturnal festival lit by fluttering bioluminescent moths. Amidst stalls draped in silk and rare night-blooming flora, I couldn't resist purchasing a delicate moon-glass charm that hummed softly whenever a cool breeze passed through the canopy.",
    "A gentle rustle of falling golden leaves filled the air at the Whisper-Leaf Market, where merchants spoke in hushed, respectful tones under the canopy's quiet hush. I paused at a small carved table and purchased a pocket-sized journal bound in flexible ironwood bark, its blank parchment smelling delightfully of crushed pine.",
    "The Sun-Glade Fair was a joyous, sun-dappled festival of bright colors, laughter, and the mouth-watering aroma of roasting nuts. Pushing through the cheerful crowd, I bought a warm, freshly baked honey-glade pastry that practically melted on my tongue with a sweet, floral burst.",
    "Tucked away in a thorny, guarded thicket, the Thorn & Thistle Emporium gave off a sharp, rebellious vibe full of strange contraptions and dangerous charms. A polished dagger forged from dark obsidian wood caught my eye, and I gladly traded a few silver coins for its lightweight, razor-sharp edge."
};


int workIdx = 0;
const std::vector<std::string> works = {
    "Canopy Sentry",
    "Bark-Carver",
    "Dew-Gatherer",
    "Root-Weaver",
    "Arbor-Apothecary"
};

const std::vector<std::string> jobWork = {
    "Perched on a swaying platform three hundred feet above the forest floor, the biting wind tore through my cloak as I scanned the endless green horizon. The work was tense and lonely—endless hours of pacing narrow boughs, hand resting on my bowstring, watching for shadow-drakes in the upper clouds while the quiet rustle of leaves below kept my heart pounding.",
    "The air in the workshop was warm and rich with the sharp, sweet smell of fresh pine shavings and resin. Kneeling before the mammoth trunk, my hands grew callous and stained with sap as I drove my chisels into the living wood, carefully shaping intricate runic reliefs that guided water channels without ever harming the giant tree.",
    "Out on the suspended rope lattices before dawn, the world was a freezing, silent violet mist dripping with damp ice. I moved with delicate precision, using soft silver funnels to harvest glistening drops of rare bioluminescent nectar from the tips of waking leaves before the harsh morning sun could burn their subtle magic away.",
    "Deep in the humid, earth-scented gloom beneath the city, the heavy thrum of the forest vibrated through my bare knees. My muscles ached as I hauled damp leather straps, coiling and coaxing massive, living root tendrils into tight structural arches to form the unbreakable foundations of the grand market above.",
    "Enclosed in a quiet, sunlit nook filled with the pungent haze of burning sage and drying flora, I worked surrounded by gently clinking glass vials. My fingers grew stained and yellowed as I carefully ground dried silverleaf petals and distilled thick amber sap, compounding potent salves to cure the damp-rot plaguing the lower levels."
};

public:
	Settlement* createCity();
	Settlement* createWork();
	Settlement* createFood();
	Settlement* createLodging();
	Settlement* createMarket();
};

#endif
