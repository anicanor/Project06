//shape.cpp
//Aaron Nicanor
//anicanor

#include<iostream>
#include<vector>

#include "shape.h" 

using namespace std;

Shape::Shape(int x, int y){

 m_x=x;
 m_y=y;
}

//Confirms that it was called
void Shape::draw(Grid &grid){
 
    cout<< "Shape draw was called" << endl;
}
