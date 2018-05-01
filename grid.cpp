//grid.cpp
//Aaron Nicanor
//anicanor
#include<iostream>
#include "grid.h"

using namespace std;

//Prints the grid
void Grid::print(){

  for(int i = 0; i <24; i++)  
    for(int o = 0; o < 60; o++)
      cout << m_grid[o][i];
    cout << endl;
  
}

void Grid::set(int x,int y, char input){
  
  // If the input is trying to put a character outside of the grid, this will stop it
  if(x>=60 || y>= 24)
    return;
  else
    m_grid[x][y]=input;

}

//Constructor
Grid::Grid(){

  for(int i = 0; i < 60; i++)
    for(int o = 0; o <24; o++)
      m_grid[i][o] = ' ';
    
}

