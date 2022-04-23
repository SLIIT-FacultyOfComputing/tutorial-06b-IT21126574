#include <iostream>
using namespace std;
#include "Box.h"

int main(){
  
   // 1. Create a Box type object called box1
   Box box1;
  
   // ======= DO NOT CHANGE THE INPUT ===========
   int Height, Length, Width;
  
   cout << "Enter the Height of the Box : ";
   cin >> Height;
   cout << "Enter the Length of the Box : ";
   cin >> Length;
   cout << "Enter the width of the Box :  ";
   cin >> Width;
   // ===========================================
  
   // 2. Use setters assign height, length, width throw
  box1.setHeight(Height);
  box1.setLength(Length);
  box1.setWidth(Width);
  
   // === DO NOT CHANGE THE OUTPUT =============
   cout << "Box Height " << box1.getHeight() << endl;
   cout << "Box Length " << box1.getLength() << endl;
   cout << "Box Width  " << box1.getWidth() << endl;
   cout << "Volume of Box is " << box1.calcVolume() << endl;
   // ==========================================
      return 0;
}

