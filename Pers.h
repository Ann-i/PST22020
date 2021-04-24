#pragma once
#include <cstring>

struct Knight 
{
	char name[10];
	int hp;
	int damage;
	int armor;
	int mage_armor;

	Knight(){
		strcpy_s(name, "\0");
		hp = 0;
		damage = 0;
		armor = 0;
		mage_armor = 0;
	}
	Knight(const char* fname, int fhp, int fdamage, int farmor, int fmage_armor) {
		strcpy_s(name, fname);
		hp = fhp;
		damage = fdamage;
		armor = farmor;
		mage_armor = fmage_armor;
	}
};

int get_damage(const Knight&, int);
void attack(Knight&, Knight&, int);
bool isDead(const Knight&);
void print(const Knight&);