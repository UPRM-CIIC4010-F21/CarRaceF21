
#include "ofMain.h"
#include "Raceable.h"
#include "Animal.h"

class Turtle : public Raceable, public Animal {

    private:

    int coordinates[2];
    int dir;
    ofImage turtleImage;

    public:

    Turtle(double x, double y, int d, ofColor c) {
        coordinates[0] = x;
        coordinates[1] = y;
        dir = d;
        turtleImage.load("turtleFwd.png");
    }

    double getX() { return coordinates[0]; };
    double getY() { return coordinates[1]; };
    int getDirection() { return dir; };
    ofColor getColor() { return ofColor(255,255,255); };

    void move(double deltaX, double deltaY) {
        coordinates[0] += deltaX;
        coordinates[1] += deltaY;
    }

    void setDirection(int d) { dir = d; };
    void setColor(ofColor c) { };

    virtual void draw();

    // Implement the Animal interface
    virtual void yell() { cout << "" << endl; }
    virtual bool isHerbivore() { return true; }

};
