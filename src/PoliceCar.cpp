
#include "ofApp.h"
#include "PoliceCar.h"

void PoliceCar::draw() {

    Car::draw();
    double x = this->getX();
    double y = this->getY();
    ofSetColor(ofColor::royalBlue);
    ofFill();
    if (this->getFlashingCounter() < 15) {
        ofDrawCircle(x + 30, y - 5, 5);
    }
}