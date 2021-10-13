
#pragma once

#include "ofMain.h"

class Vehicle {

    private:
    double xPos;
    double yPos;
    int direction;
    ofColor color;

    public:
    double getX() { return xPos; }
    double getY() { return yPos; }
    int getDirection() { return direction; }
    ofColor getColor() { return color; }

    void move(double deltaX, double deltaY);
    void setDirection(int d) { direction = d; }
    void setColor(ofColor c) { color = c; }

    Vehicle(double x, double y, int d, ofColor c) {
        xPos = x;
        yPos = y;
        direction = d;
        color = c;
    }

    Vehicle()
    {
        xPos = 0;
        yPos = 0;
        direction = 1;
    }

    virtual void draw() = 0;
};
