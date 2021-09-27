#include "ofApp.h"

#include "Car.h"

//--------------------------------------------------------------
void ofApp::setup(){

    // this->xPos = 0;
    // this->yPos = 0;
    // this->direction = 1;

}

//--------------------------------------------------------------
void ofApp::update()
{

    int hSpeed = 5;
    if (((theCar.getDirection() > 0) && (theCar.getX() + 60 + hSpeed < ofGetWidth())) ||
        (((theCar.getDirection() < 0) && (theCar.getX() - hSpeed > 0))))
    {

        theCar.move(theCar.getDirection() * hSpeed, 0);
    }
    else
    {
        theCar.setDirection(theCar.getDirection() * -1);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    this->theCar.draw();

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
