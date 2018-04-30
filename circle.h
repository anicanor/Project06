//circle.h
//Aaron Nicanor
//anicanor

#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include "grid.h"

#include<iostream>

using namespace std;

class Circle:public Shape{

  public:
    void draw(Grid &grid);
    Circle(int x, int y);

};

#endif
