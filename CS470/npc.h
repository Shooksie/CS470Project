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
	void setID(int id);
	void setName(string itemName);
	void setDesc(string desc);
};


class physical {
	string hairID, eyesID, gender, bodyType, faceId;
public:

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

