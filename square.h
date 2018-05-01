//square.h
//Aaron Nicanor
//anicanor

#ifndef SQUARE_H 
#define SQUARE_H

#include<iostream>
#include"shape.h"

using namespace std;

class Square : public Shape{

  public: 
    void draw(Grid &);
    Square(int ,int ,int );

  private: 
    int m_size;
};
#endif
