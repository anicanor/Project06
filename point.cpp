//point.cpp
//Aaron Nicanor
//anicanor

#include<iostream>

#include "point.h"
#include <vector>

using namespace std;

//Creates the grid with points
void Point::draw(Grid &grid){

  grid.set(m_x, m_y,m_input);
}

Point::Point(int x, int y, char input) : Shape(x,y){

  m_input = input;
}
