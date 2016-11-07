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

}* attri;


class item {
	int itemID;
	string name, description;
};