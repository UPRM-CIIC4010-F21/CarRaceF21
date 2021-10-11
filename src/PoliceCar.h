
#pragma once

#include "ofMain.h"
#include "Car.h"

class PoliceCar : public Car {

    private:
        int flashingCounter;

    public:

    PoliceCar(double x, double y, int d, ofColor c) : Car(x,y,d,c) {}

    PoliceCar() : Car(0,0,1,ofColor(255,255,255)) {
        this->flashingCounter = 30; // Flash every second (30 ticks)
    }

    int getFlashingCounter() { return flashingCounter; }
    void setFlashingCounter(int fc) { flashingCounter = fc; }

    virtual void draw();
};
