//grid.h
//Aaron Nicanor
//anicanor

#ifndef GRID_H
#define GRID_H

#include<iostream> 

// A vector declaration. Acts as a character template
typedef vector < vector <char> > Matrix;

using namespace std;

class Grid{

  public:
    void print();
    void set(int ,int , char );
    Grid();
  
  private: 
        Matrix grid;
        
};

#endif
