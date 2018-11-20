#pragma once
#include<string>
class Human
{
protected :
	// Used to give an number for each human
	unsigned long id;
	// The actual age of the human
	unsigned int age;
	// The actual name of the human
	std::string name;
	// The actual weight of the human
	unsigned int weight;
	// The actual length of the human
	unsigned int length;
	// the maximal amount of life the human have
	unsigned int life;
	// the actual amount of life the human have
	unsigned int actual_life;
public:
	virtual void sleep() = 0;
	virtual void seat() = 0;
	virtual void eat() = 0;

	virtual void walk() = 0;
	virtual void jump() = 0;
	virtual void run() = 0;

	virtual void kick() = 0;

	virtual void die() = 0;
	
	
};

