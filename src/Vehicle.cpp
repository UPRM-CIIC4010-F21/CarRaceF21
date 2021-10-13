#include "Vehicle.h"

void Vehicle::move(double dx, double dy) {
    this->xPos += dx;
    this->yPos += dy;
}