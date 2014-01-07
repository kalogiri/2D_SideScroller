#pragma once

//Header Files for my Project
#include "particles.h"
#include "enemyBlocks.h"
#include "ofMain.h"
#include "bullets.h"
#include "player.h"

//-----------------------------------
#include "ofxOpenCv.h"
#include "ofxNetwork.h"
#include "ofxOsc.h"
//#include "ofxSynth.h"
#include "ofxXmlSettings.h"
#include "ofx3DModelLoader.h"
#include "ofxAssimpModelLoader.h"
#include "ofxThreadedImageLoader.h"



class testApp : public ofBaseApp{

	public:
		//Variables
		int height;
		int width;

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

		// we don't actually use these
        // just checking to see if they
        // all work in the same place :)

        ofxCvGrayscaleImage cvGray;
        ofxTCPClient client;
        ofxTCPServer server;
        ofxOscSender osc_sender;
        ofxXmlSettings settings;
        ofx3DModelLoader modelLoader;
		ofxAssimpModelLoader betterModelLoader;
		//ofxSynth synth;
		ofxThreadedImageLoader threadedLoader;
};
