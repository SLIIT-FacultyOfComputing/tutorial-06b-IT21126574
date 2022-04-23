#include "Box.h"
#include <iostream>

// Implement setters 
void Box::setLength(double l){

   Length=l;
}
void Box::setWidth(double w)
{
   Width=w;
}
void Box::setHeight(double h)
{
   Height=h;
}
// Implement getters
int Box::getLength()
{
  return Length; 
}
int Box::getWidth()
{
  return Width;
}

int Box::getHeight()
{
  return Height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {

  return Length * Width * Height;
}
