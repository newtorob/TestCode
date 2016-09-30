#include <iostream>
#define ROWS 3
#define COLS 4
using namespace std;


int main() {

  int arr2d[3][4];

  cout << "Address in arr: " <<arr2d <<endl;
  cout << "Address of arr location: " <<&arr2d <<endl;


  for (int i = 0; i < ROWS; i++)
    for (int j =0; j < COLS; j++)
      cout << "Contents: " << arr2d[i][j] <<endl;
  return 0;
}
