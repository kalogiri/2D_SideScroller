#pragma once

//Header Files for my Project
#include "particles.h"
#include "enemyBlocks.h"
#include "ofMain.h"
#include "bullets.h"
#include "player.h"

class testApp : public ofBaseApp{

	public:
		//Variables
		int height;
		int width;
		bool up,down,right,left;

		//Methods
		void setup();
		void update();
		void draw();
		void particleDraw();
		void enemyBlockDraw();
		void particleDisplay();
		void enemyBlockDisplay();
		void drawEdges();
		void bulletDraw();
		void playerMove();
		void bulletDisplay();
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		//The background Particles
		vector<particles> particle;
		particles p;

		//The enemies
		vector<enemyBlocks> enemyBlock;
		enemyBlocks e;

		//The player
		player c;

		//The bullets
		vector<bullets>bullet;
		bullets b;
};
