#include "enemyBlocks.h"

/*
enemyBlocks::enemyBlocks(){
	pos.set(800,50,0);
	vel.set(-3,0,0);
	blockHeight = ofRandom(30,50);
}

void enemyBlocks:: update(){
	pos +=vel;
	//vel.y += ofRandom(-0.01,0.01);
}

void enemyBlocks:: display(){
	ofSetLineWidth(10);
	ofSetColor(0,100,200);
	ofFill();
	ofRect(pos.x,pos.y,30, blockHeight);
	ofSetColor(255); //Reset to default
}

enemyBlocks::~enemyBlocks(void){
}
*/

enemyBlocks::enemyBlocks(){
	pos.set(800,150,0);
	vel.set(ofRandom(-1,-0.5),0,0);
}

void enemyBlocks:: update(){
	pos +=vel;
	vel.y += ofRandom(-0.01,0.01);
}

void enemyBlocks:: display(){
	ofSetLineWidth(10);
	ofSetColor(0,100,200);
	ofFill();
	ofRect(pos.x,pos.y,20,20);
	ofSetColor(255); //Reset to default
}

enemyBlocks::~enemyBlocks(void){
}
