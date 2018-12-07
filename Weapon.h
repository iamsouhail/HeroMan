#pragma once
#include<string>
#include "Person.h"
class Weapon
{
protected:
	// The name of the weapon
	int name;
	// Amount of Damage
	long damage;
	// Creation Date 
	std::string creationDate;
	// story details of this Weapon
	std::string story;

public:
	// When attacking a Person it should damage him
	virtual void attack(Person &)=0;

	// distructor of the class
	virtual ~Weapon() = 0;
};

