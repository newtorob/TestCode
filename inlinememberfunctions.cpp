#include <iostream>
using namespace std;

class Rectangle {
private:
  int initialWidth; 
  int initialHeight;

public:
  int width;
  int height;

  //doubleSize is an inline function definition 
  void doubleSize(); //now with all this commented out, its a function prototype
  /*{
    //int width -- don't do this!!!!
    width = width * 2;
    height = height * 2;
    }*/

}; 

//:: is the scope resolution operator
void Rectangle::doubleSize() //function definition for doubleSize()
{
  width = width * 2;
    height = height *2;
}
int main() {

  Rectangle rectangle1;
  rectangle1.width = 5;
  rectangle1.height = 10;

  //since the rectangle object combines data with a function, i dont have to pass current size info to the function
  rectangle1.doubleSize();

  cout << "width:   " << rectangle1.width <<endl;
  //should output 10 as width was doubled

  return 0;
}
