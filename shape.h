//shape.h
//Aaron Nicanor
//anicanor
#ifndef SHAPE_H 
#define SHAPE_H

#include "grid.h"
#include<iostream>

using namespace std;

class Shape{

  public: 
    virtual void draw(Grid &);
    Shape(int , int );

  protected:
    int m_x;
    int m_y;
};
#endif
