
#pragma once

#include "ofMain.h"

class Raceable {

public:

    virtual double getX() = 0;
    virtual double getY() = 0;
    virtual int getDirection()  = 0;
    virtual ofColor getColor() = 0;

    virtual void move(double deltaX, double deltaY) = 0;
    virtual void setDirection(int d) = 0;
    virtual void setColor(ofColor c) = 0;

    virtual void draw() = 0;

};
