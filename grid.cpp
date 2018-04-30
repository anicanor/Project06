//grid.cpp
//Aaron Nicanor
//anicanor
#include "grid.h"
#include<iostream>

using namespace std;

void Grid::set(int x,int y, char input){
  
  //Makes sure the grid is at most 60x24
  if(x>=60 || y>= 24)
    return;
  else
    m_grid[x][y]=input;

}


void Grid::print(){

  for(int i = 0; i <24; i++)  
    for(int o = 0; o < 60; o++)
      cout << m_grid[o][i];
    cout << endl;
  
}

//Constructor
Grid::Grid(){

  for(int i = 0; i < 60; i++)
    for(int o = 0; o <24; row++)
      m_grid[i][o] = ' ';
    
}

//Desctructor
Grid::~Grid(){
  
    for(int i = 0; i <24; i++)
      delete [] m_grid[i];
    delete [] m_grid;
  
}
