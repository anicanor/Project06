//triangle.h
//Aaron Nicanor
//anicanor

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include<vector>
#include<iostream>

#include "shape.h"


class Triangle:public Shape{

  public: 
    void draw(Grid &);
    Triangle(int , int );

};
#endif
