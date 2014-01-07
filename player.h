#pragma once

#include "ofMain.h"

class player
{
public:

	//Variables
	ofVec3f vel;
	ofPoint pos;

	//functions
	void display();
	void update();

	//Setter functions for the bullet
	int returnBulletXps();
	int returnBulletYps();

	//Constructor
	player();

	//Destructor
	~player();
};

