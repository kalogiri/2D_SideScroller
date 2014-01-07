#pragma once

#include "ofMain.h"

class bullets
{
public:
	//Methods
	void update();
	void display();
	//Getter functions for the bullet
	void setBulletYPos(int);
	void setBulletXPos(int);

	//Variables
	ofPoint pos;
	ofVec3f vel;

	bullets(void);
	~bullets(void);
};

