//point.cpp
//Aaron Nicanor
//anicanor

#include "point.h"
#include "grid.h"
#include "shape.h" 

#include<iostream>

using namespace std;

//Creates the grid with points
void Point::draw(Grid &grid){

  grid.set(m_x, m_y,m_input);
}

Point::Point(int x, int y, char input) : Shape(x,y){

  m_input = input;
}
