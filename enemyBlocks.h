#pragma once

#include "ofMain.h"
class enemyBlocks
{
public:
	// Methods
	void update();
	void display();

	// Variables
	ofPoint pos;
	ofVec3f vel;
	int blockHeight;

	// Constructor
	enemyBlocks(void);

	// Destructor
	~enemyBlocks(void);
};

