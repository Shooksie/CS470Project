#pragma once
#include <string>
#include <list>
#include <map>
#include <vector>

using namespace std;

class nPc {
private: 
	string fname, lname;
	int iD, bloodline;
	int Age;
	int loyalty;
	int factionID;
	int level;
	int exp;
	attri npcAttri;
	vector<item> npcDrops;
public:
	void setName(string first, string last) { fname = first;
	lname = last;
	};
	void setID(int id) {
		iD = id;
	};
	void setAge(int age) {
		Age = age; };
	void setLoyalty(int loyal) { 
		loyalty = loyal; };
	void setLevel(int levels) {
		level = levels;
	};
};

typedef class npcAttribute {
	physical* physcials;
	stats* npcStats;
public:
	void setPhyical(physical* physcial) { physcials = physcial; };
	void setStats(stats* stat) {
		npcStats = stat;};

}* attri;


class item {
	int itemID;
	string name, description;
	map<string, int> effects;
public: 
	void setID(int id) { itemID = id; };
	void setName(string itemName) { name = itemName; };
	void setDesc(string desc) { description = desc; };
};


class physical {
	string hairID, eyesID, bodyType, faceId;
	int gender;
public:
	void setHair(string id) { hairID = id; };
	void setEyes(string id) {
		eyesID = id;
	};
	void setGender(int id) {
		gender = id;
	};
	void setBody(string id) {
		bodyType = id;
	};
	void faceID(string id) {
		faceId = id;
	};
};

class stats {
	int Endurance, strength, healthPoints, Dexterity, Intelligence;
public:
	void setEndurance(int endur) {
		Endurance = endur;
	};
	void setStrength(int str) { strength = str; };
	void setHealth(int health) { healthPoints = health; };
	void setDex(int dex) { Dexterity = dex; };
	void setIntel(int intel) { Intelligence = intel; };
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

template<class inside> class location{
	int x, y;
	inside* atPosition;
};

template<class gridObj> class grid {
	int width, height;
	gridObj* grids;
public:
	void createGrid();
	void setWidth(int x);
	void setHeight(int y);
};