//grid.h
//Aaron Nicanor
//anicanor

#ifndef GRID_H
#define GRID_H

#include<iostream> 
#include<vector>

using namespace std;

// A vector declaration. Acts as a character template
typedef vector < vector <char> > Matrix;

class Grid{

  public:
    void print();
    void set(int ,int , char );
    Grid();
  
  private: 
        Matrix grid;
        
};

#endif
