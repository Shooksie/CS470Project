#pragma once
#include <string>
#include <list>

using namespace std;

class nPc {
private: 
	string fname, lname;
	int id, bloodline;
	int Age;
	int loyaltyID;
	int factionID;
	int level;
	int exp;
	attri npcAttri;
	list<item> npcDrops;

};

typedef class npcAttribute {
	physical phsycials;
	stats npcStats;
}* attri;


class item {
	int itemID;
	string name, description;
};


class physical {
	string hairID, eyesID, gender, bodyType, faceId;
};

class stats {
	int Endurance, strength, healthPoints, Dexterity, Intelligence;
};

class faction {
	int factionId, factionName, Region;
};
  

class quest {
	int questID, assignedBy;
	string MainObjective;
	int reward;
	bool completed;
};

