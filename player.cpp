#include "player.h"


player::player(){
	pos.set(50,200);
}

//Getters for the bullet
int player::returnBulletXps(){
	return pos.x;
}

int player::returnBulletYps(){
	return pos.y;
}


void player::display() {
	ofSetColor(0);
	ofFill();
	ofRect(pos.x, pos.y, 25,25);
	ofSetColor(255);
}

void player::update() {

}


player::~player(void)
{
}
