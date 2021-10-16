#pragma once
#include "ofMain.h"
#include "Vehicle.h"

class Truck : public Vehicle {

public:

    Truck(double x, double y, int d, ofColor c) : Vehicle(x,y,d,c) {}

    Truck() : Vehicle(0,0,1,ofColor(255,255,255)){}

    virtual void draw();

};
