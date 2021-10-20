#include "ofApp.h"

#include "Car.h"
#include "PoliceCar.h"
#include "Truck.h"
#include "Turtle.h"

//--------------------------------------------------------------
void ofApp::setup()
{

    raceFinished = false;
    int lane = 0;
    for (int i = 0; i < numCars; i++)
    {
        if (i % 4 == 0) {
            theRaceables.push_back(new Car(0, lane, 1, ofColor(255, 255, 255)));
        } else if (i % 4 == 1) {
            theRaceables.push_back(new Truck(0, lane, 1, ofColor(255, 255, 255)));
        } else if (i % 4 == 2) {
            theRaceables.push_back(new PoliceCar(0, lane, 1, ofColor(255, 255, 255)));
        } else {
            theRaceables.push_back(new Turtle(0, lane, 1, ofColor(255, 255, 255)));
        }
        //theCars[i]->move(0, lane);
        lane += 50;
    }
}

//--------------------------------------------------------------
void ofApp::update()
{
    if (raceFinished) return;

    int hSpeed = 5;
    for (int i=0; i<numCars; i++) {
        int deltaX = ofRandom(hSpeed);
        if (((theRaceables[i]->getDirection() > 0) && (theRaceables[i]->getX() + 60 + hSpeed < ofGetWidth())) ||
            (((theRaceables[i]->getDirection() < 0) && (theRaceables[i]->getX() - hSpeed > 0))))
        {

            theRaceables[i]->move(theRaceables[i]->getDirection() * deltaX, 0);
            
        }
        else
        {
            theRaceables[i]->setDirection(theRaceables[i]->getDirection() * -1);
        }
    }

    for (int i = 0; i < theRaceables.size(); i++) {

        PoliceCar *pc = dynamic_cast<PoliceCar *>(theRaceables[i]);
        if (pc != nullptr) {
            if (pc->getFlashingCounter() < 0) {
                pc->setFlashingCounter(30);
            } else {
                pc->setFlashingCounter(pc->getFlashingCounter() - 1);
            }
        }
    }

    for(int i=0; i<numCars; i++) {
        if ((theRaceables[i]->getDirection() > 0) && (theRaceables[i]->getX() + 60 + hSpeed >= ofGetWidth())) {
            raceFinished = true;
        }
    }

    int leaderPos = 0;
    theRaceables[0]->setColor(ofColor(255, 255, 255));

    for (int i=1; i<numCars; i++) {
        if (theRaceables[i]->getX() >= theRaceables[leaderPos]->getX()) {
            leaderPos = i;
        }
        theRaceables[i]->setColor(ofColor(255, 255, 255));
    }
    theRaceables[leaderPos]->setColor(ofColor(255, 0, 0));

}

//--------------------------------------------------------------
void ofApp::draw(){

    for (int i=0; i<numCars; i++) {
        this->theRaceables[i]->draw();
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
