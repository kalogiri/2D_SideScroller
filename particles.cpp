#include "particles.h"

particles::particles(){
	pos.set(1000,150,0);
	vel.set(-2,0,0);
	//vel.set(ofRandom(-5,-1),0,0);
}

void particles::update(){
	pos +=vel;
	vel.y += ofRandom(-0.1,0.1);
}

void particles::display(){
	ofSetColor(100,20,50);
	ofFill();
	ofEllipse(pos.x,pos.y,2,2);
	ofSetColor(255); //Set this so that everything else after the ellipse will return to the default color, in this case white.
}
