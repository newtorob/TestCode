#include <iostream>
#include <algorithm>

int main() {

    int array[] = {23,5,-10,0,0,321,1,2,99,30};
    int size = 10;
    std:: sort(array,array+size);
    for (int i=0; i < size; i++)
        std::cout << array[i] << ' ';

    //this program first initializes an array of ints, then we use the built in sort
    //which you need algorithm for, it takes two arguments
    //a pointer to the first element, and a pointer to the final, then the array
    //is printed out, the elements will be in ascending numeric order
}
