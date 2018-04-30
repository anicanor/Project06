//point.h
//Aaron Nicanor
//anicanor

#ifndef POINT_H
#define POINT_H

#include "shape.h"
#include "grid.h"

#include<iostream>

using namespace std;

class Point:public Shape{

  public:
    void draw(Grid &grid);
    Point(int x, int y, char input); 
  
  protected:
    char m_input;
    
};

#endif
