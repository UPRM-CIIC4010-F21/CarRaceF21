
#pragma once

class Car {

    private:
    double xPos;
    double yPos;
    int direction;

    public:
    double getX() { return xPos; }
    double getY() { return yPos; }
    int getDirection() { return direction; }

    void move(double deltaX, double deltaY);
    void setDirection(int d) { direction = d; }

    Car(double x, double y, int d) {
        xPos = x;
        yPos = y;
        direction = d;
    }

    Car()
    {
        xPos = 0;
        yPos = 0;
        direction = 1;
    }

    void draw();
};
