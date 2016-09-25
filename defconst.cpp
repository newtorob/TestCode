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
  Rectangle (int w, int h); //overloaded constructor

    //deconstructor
    ~Rectangle();
};
//since we used a protoype above, we must use the scope resolution
//operator which when we do this for a constructor we end up
//typing the class name twice, it may look strange but it is correct

Rectangle::Rectangle(int w,int h) {
  initialHeight = h;
  initialWidth = w;
  width = w;
  height = h;
}

//note ~aftern scope resolution operator
Rectangle::~Rectangle() {
    cout << "bye bye"<<endl;
}
//now lets create some class objects

int main() {
  Rectangle rectangle1;//default constructor
  Rectangle rectangle2(10,20);//use constructorto set starting w and h
  //since there are 2 rectangle objects, the destructor
  //will be called twice when the program finishes

}
