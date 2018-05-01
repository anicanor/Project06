//point.h
//Aaron Nicanor
//anicanor

#ifndef POINT_H
#define POINT_H

#include<iostream>
#include<vector>

#include "shape.h"
#include "grid.h"

using namespace std;

class Point:public Shape{

  public:
    void draw(Grid &);
    Point(int , int , char ); 
  
  private:
    char m_input;
    
};

#endif
