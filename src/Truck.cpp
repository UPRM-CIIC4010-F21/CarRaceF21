
#include "Truck.h"

void Truck::draw() {

    double x = this->getX();
    double y = this->getY();
    ofSetColor(this->getColor());
    // Draw body
    ofDrawRectangle(x + 0, y + 10, 60, 10);
    // Draw roof and windshields
    // ofDrawLine(x + 10, y + 10, x + 20, y + 0);
    // ofDrawLine(x + 20, y + 0, x + 40, y + 0);
    ofDrawLine(x + 40, y + 0, x + 50, y + 10);
    ofDrawRectangle(x + 0, y + 0, 40, 20);


    ofSetColor(ofColor(255,255,255));
    // Draw tires
    ofDrawCircle(x+3 , y + 25, 5);
    ofDrawCircle(x + 15, y + 25, 5);
    ofDrawCircle(x + 45, y + 25, 5); 
}