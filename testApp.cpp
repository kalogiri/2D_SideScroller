#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    height = ofGetScreenHeight();
    width = ofGetScreenWidth();
    up = false;
    down = false;
    right = false;
    left = false;
    //particle.push_back(particles());
    ofHideCursor();
}

//--------------------------------------------------------------
void testApp::drawEdges(){
    ofSetColor(0);
    ofFill();
    ofRect(0,0,width,50);
    ofRect(0,270,width,50);
}

//--------------------------------------------------------------
void testApp::particleDraw() {
    for (int i = 0; i < particle.size(); i++) {
        particle[i].update();
        particle[i].display();
    }
}
//--------------------------------------------------------------
void testApp::enemyBlockDraw(){
    for (int i = 0; i < enemyBlock.size(); i+= 100) {//Adjust how many blocks there are on the screen
        enemyBlock[i].update();
        enemyBlock[i].display();
    }
}

//--------------------------------------------------------------
void testApp::particleDisplay() {
    for(int i = 0; i <= 1; i++) {
        particle.push_back(particles());
    }
    if(particle.size() > 50){
        particle.erase(particle.begin());
    }
    particleDraw();
}
//--------------------------------------------------------------
void testApp::enemyBlockDisplay(){
    for(int i = 0; i < 2; i+=100) {//Adjust the at which the blocks are displayed on the screen
        enemyBlock.push_back(enemyBlocks());
    }
    enemyBlockDraw();
}

//--------------------------------------------------------------
void testApp::bulletDisplay(){
    
    bullet.push_back(bullets());
    bullet[bullet.size()-1].setBulletXPos(c.returnBulletXps());
    bullet[bullet.size()-1].setBulletYPos(c.returnBulletYps());
    
    //Deletes the bullet if it goes off Screen
    if(b.pos.y > ofGetScreenHeight() || b.pos.y < 0) {
        if(b.pos.x > ofGetScreenWidth() || b.pos.x < 0) {
            bullet.erase(bullet.begin());
        }//if
    }//if
    
    if(bullet.size() > 50) {//Deletes the bullet when the bullet count reaches 50
        bullet.erase(bullet.begin());
    }//if
}//Bullet Display

//--------------------------------------------------------------
void testApp::bulletDraw(){//Sets the bullet object onto the canvas
    for(int i = 0; i < bullet.size(); i++) {
        bullet[i].update();
        bullet[i].display();
    }//for
}//bulletDraw

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
    /*
     The order the functions are called is the order in which the display layer is made
     So the first function called will be at the backmost layer so the functions called
     After it will be displayed ontop of that function. This is a good way to layer the
     program into what needs to be seen and what can be hidden. Like the start position
     for the bullet is behind the player so that the bullet isnt seen from its starting
     pos but from when it leaves the player.
     */
    particleDisplay();
    enemyBlockDisplay();
    bulletDraw();
    c.display();
    drawEdges();
    playerMove();
    
}

//--------------------------------------------------------------
void testApp::playerMove() {
    if(up == true) {
        c.pos.y--;
    }
    
    if(down == true) {
        c.pos.y++;
    }
    
    if(right == true) {
        c.pos.x++;
    }
    
    if(left == true) {
        c.pos.x--;
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
    /*
     left arrow key = 356
     up arrow key = 357
     right arrow key = 358
     down arrow key = 359
     w = 119
     a = 97
     s = 115
     d = 100
     */
    
    //Movement of the player
 
    if(key == 119 || key == 357) {//Up
        up = true;
    }//if
    if(key == 97|| key == 356) {//Left
        left = true;
    }//if
    if (key == 115|| key == 359) {//Down
        down = true;
    }//if
    if(key == 100|| key == 358) {//Right
        right = true;
    }//if
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    if(key == 119 || key == 357) {//Up
        up = false;
    }//if
    if(key == 97|| key == 356) {//Left
        left = false;
    }//if
    if (key == 115|| key == 359) {//Down
        down = false;
    }//if
    if(key == 100|| key == 358) {//Right
        right = false;
    }//if
    
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    //Shooting the bullets when pressing a mouseButton
    //button 0 = left mouse button
    //button 1 = middle mouse button
    //button 3 = right mouse button
    if(button == 0) {
        bulletDisplay();
    }//if
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){
    
}
