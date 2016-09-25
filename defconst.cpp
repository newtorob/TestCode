#include <iostream>
using namespace std;

class Rectangle {
private:
  int initialWidth;
  int initialHeight;
  int width;
  int height;


public:

  //no return type, name is the same as the class name
  //this is the default constructors as it has no parameters

  Rectangle() {
    initialHeight = 0;
    initialWidth = 0;
    width = 0;
    height = 0;
  }
};
