//grid.h
//Aaron Nicanor
//anicanor

#ifndef GRID_H
#define GRID_H

#include<iostream> 

using namespace std;

class Grid{

  public:
    void print();
    void set(int x,int y, char input);
    Grid();
    ~Grid();
    
  private: 
      char m_grid[60][24];
        
};

#endif
