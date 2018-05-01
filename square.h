//square.h
//Aaron Nicanor
//anicanor

#ifndef SQUARE_H 
#define SQUARE_H

#include"shape.h"
#include"grid.h"

#include<iostream>

using namespace std;

class Square:public Shape{

  public: 
    void draw(Grid &grid);
    Square(int x,int y,int size);

  private: 
    int m_size;
};
#endif
