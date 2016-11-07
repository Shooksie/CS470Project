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

