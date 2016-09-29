#include <iostream>
#define ELE 5
using namespace std;
//don't do this, i am just following lecture code for this


int main() {

  int arr[ELE];
  int i
  cout << "Array location: " << arr << endl;
  cout <<"Array Pointer location: " << &arr <<endl;
  //self-ref pointer for static array
  cout <<"Initial contents: " << arr[0] <<endl;

  for (i=0; i<ELE; i++)
    arr[i];
  for (i = 0; i<ELE; i++)
    cout << "Initial contents: " << arr[i] <<endl;

  return 0;

}
