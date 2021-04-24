#include "Pers.h"
#include <cstdlib>
#include <ctime>
#include<iostream>

int get_damage(const Knight& k1, int a) {
	srand(time(NULL) + a);
	float random_add = (rand() % 51 - 25)/100.0;
	float damage = k1.damage * (1 + random_add);
	return int(damage);
}
void attack(Knight& k1, Knight& k2, int a) {
	k2.hp = k2.hp - get_damage(k1, a);
}
bool isDead(const Knight& k1) {
	return k1.hp <= 0;
}
void print(const Knight& k1) {
	std::cout << k1.name << " has " << k1.hp << "hp\n";
}