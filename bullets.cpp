#include "bullets.h"


//Constructor
bullets::bullets(){
	vel.set(3,0,0);
}//Constructor

void bullets::update() {
	//Adds the velocity vector onto the position so that the bullet can move
	pos += vel;
}//update

/*
	*********************************************************************
	Setter functions for the bullet positions so the getter function
	in the player class allows the bullets position to change with the
	players position. Also allows you to change where the bullets starts.

	*********************************************************************
*/
void bullets::setBulletXPos(int psX) {
	pos.x = psX;
}//setXPos

void bullets::setBulletYPos(int psY){
	pos.y = psY + 15;
}//setYPos

void bullets::display() {
	ofSetColor(100,20,50);
	ofFill();
	ofEllipse(pos.x, pos.y, 2,2);
	ofSetColor(255);
}

bullets::~bullets(void){
}
