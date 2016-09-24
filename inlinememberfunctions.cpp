#include <iostream>
using namespace std;

class Rectangle {
private:
  int initialWidth; 
  int initialHeight;
    int width;
    int height;
//move the actual variables to private to preserve hidden value

public:
    //int width;
    //int height;

    //setters
    bool setWidth(int);
    bool setHeight(int);

    //getters
    int getWidth();
    int getHeight();

  //doubleSize is an inline function definition 
  void doubleSize(); //now with all this commented out, its a function prototype
  /*{
    //int width -- don't do this!!!!
    width = width * 2;
    height = height * 2;
    }*/

}; 

//two setter functions perform input validation
bool Rectangle::setWidth(int w) {
    if (w <0 || w > 1000)
        return false;
    else {
        width = w;
        return true;
    }
}

bool Rectangle::setHeight(int h) {
    if (h < 0 || h >1000)
        return false;
    else {
        height = h;
        return true;
    }
}

//two simple getter functions these hide the
//actual method of storage from the object user
int Rectangle::getHeight() {
    return height;
}
int Rectangle::getWidth() {
    return width;
}
//:: is the scope resolution operator
void Rectangle::doubleSize() //function definition for doubleSize()
{
  width = width * 2;
    height = height *2;
}

//the getteer functions in this example simply return the data
//but the use of getter functions would allow usr to change how
//we store the height and width such as using another class at some
//point in the time witrhout affecting calls to getHeight and
//getWidth
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
