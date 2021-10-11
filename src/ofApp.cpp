#include "ofApp.h"

#include "Car.h"
#include "PoliceCar.h"

//--------------------------------------------------------------
void ofApp::setup()
{

    raceFinished = false;
    int lane = 0;
    for (int i = 0; i < numCars; i++)
    {
        if (i % 2 == 0) {
            theCars.push_back(new Car(0,lane,1, ofColor(255, 255, 255)));
        }
        else {
            theCars.push_back(new PoliceCar(0,lane,1, ofColor(255, 255, 255)));
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
        if (((theCars[i]->getDirection() > 0) && (theCars[i]->getX() + 60 + hSpeed < ofGetWidth())) ||
            (((theCars[i]->getDirection() < 0) && (theCars[i]->getX() - hSpeed > 0))))
        {

            theCars[i]->move(theCars[i]->getDirection() * deltaX, 0);
            
        }
        else
        {
            theCars[i]->setDirection(theCars[i]->getDirection() * -1);
        }
    }

    for (int i = 0; i < theCars.size(); i++) {

        PoliceCar *pc = dynamic_cast<PoliceCar *>(theCars[i]);
        if (pc != nullptr) {
            if (pc->getFlashingCounter() < 0) {
                pc->setFlashingCounter(30);
            } else {
                pc->setFlashingCounter(pc->getFlashingCounter() - 1);
            }
        }
    }

    for(int i=0; i<numCars; i++) {
        if ((theCars[i]->getDirection() > 0) && (theCars[i]->getX() + 60 + hSpeed >= ofGetWidth())) {
            raceFinished = true;
        }
    }

    int leaderPos = 0;
    theCars[0]->setColor(ofColor(255, 255, 255));

    for (int i=1; i<numCars; i++) {
        if (theCars[i]->getX() >= theCars[leaderPos]->getX()) {
            leaderPos = i;
        }
        theCars[i]->setColor(ofColor(255, 255, 255));
    }
    theCars[leaderPos]->setColor(ofColor(255, 0, 0));

}

//--------------------------------------------------------------
void ofApp::draw(){

    for (int i=0; i<numCars; i++) {
        this->theCars[i]->draw();
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
