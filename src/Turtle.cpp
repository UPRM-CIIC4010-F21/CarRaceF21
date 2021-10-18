#include "ofMain.h"
#include "Turtle.h"

void Turtle::draw() {

    turtleImage.draw(this->getX(), this->getY(), 40, 30);

}
