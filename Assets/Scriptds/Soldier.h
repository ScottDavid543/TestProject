#pragma once
#include "Person.h"
#include "Weapon.h"

class Soldier :
	public Person
{
private:
	Weapon *weapon;

public:
	Soldier();
	~Soldier();

	void FireWeapon(Person *person);
	void FireWeapon(int burst,Person *person);
	void Reload();
	void Load(Weapon *newWeapon) {
		weapon = newWeapon;
	}
};

