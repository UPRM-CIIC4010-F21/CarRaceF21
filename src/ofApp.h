#pragma once

#include "ofMain.h"
#include <vector>
#include "Raceable.h"

class ofApp : public ofBaseApp{

	private:
		// double xPos = 0;
		// double yPos = 0;
		// int direction = 1;

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		//Car theCar = Car(0,0,1); // Creates a single car at (0,0) going left to right

		const int numCars=10;
		vector<Raceable*> theRaceables;
		bool raceFinished;
		
};
