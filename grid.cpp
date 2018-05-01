//grid.cpp
//Aaron Nicanor
//anicanor

#include<iostream>
#include "grid.h"

using namespace std;

// The number of Rows and Columns
const int ROWS = 24;
const int COLS = 60;

//Prints the grid
void Grid::print(){
  
    for(unsigned int i = 0; i < grid.size(); i++){
      
        for(unsigned int o = 0; o < grid[0].size(); o++)
          cout<<grid[i][o];
        
        cout << "\n"; //endl;
    }
}

void Grid::set(int x,int y, char input){
  
    // If the input is trying to put a character outside of the grid, this will stop it
    if(x < COLS && y >= 0 && y < ROWS && x >= 0)
        grid[y][x] = input;
}

//Constructor
Grid::Grid(){
  
  grid.resize(ROWS);
      for(unsigned int i = 0; i < grid.size(); i++)
        grid[i].resize(COLS);
  
      for(unsigned int i = 0; i < grid.size(); i++){
        for(unsigned int o = 0; o < grid[0].size(); o++){
          
            grid[i][o] = ' ';
        }
      }
}

