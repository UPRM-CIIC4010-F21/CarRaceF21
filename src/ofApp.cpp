#include "ofApp.h"

#include "Car.h"

//--------------------------------------------------------------
void ofApp::setup()
{

    raceFinished = false;
    int lane = 0;
    for (int i = 0; i < numCars; i++)
    {
        theCars.push_back(Car(0,lane,1));
        //theCars[i].move(0, lane);
        lane += 40;
    }
}

//--------------------------------------------------------------
void ofApp::update()
{
    if (raceFinished) return;

    int hSpeed = 5;
    for (int i=0; i<numCars; i++) {
        int deltaX = ofRandom(hSpeed);
        if (((theCars[i].getDirection() > 0) && (theCars[i].getX() + 60 + hSpeed < ofGetWidth())) ||
            (((theCars[i].getDirection() < 0) && (theCars[i].getX() - hSpeed > 0))))
        {

            theCars[i].move(theCars[i].getDirection() * deltaX, 0);
            
        }
        else
        {
            theCars[i].setDirection(theCars[i].getDirection() * -1);
        }
    }

    for(int i=0; i<numCars; i++) {
        if ((theCars[i].getDirection() > 0) && (theCars[i].getX() + 60 + hSpeed >= ofGetWidth())) {
            raceFinished = true;
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    for (int i=0; i<numCars; i++) {
        this->theCars[i].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
