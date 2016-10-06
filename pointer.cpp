#include <iostream>

using std::cin;
using std::cout;
using std::endl;


void swap_point(int *x, int *y) {
	cout <<"x: " << *x << " y: " << *y<<endl'
	int temp = *x;
	*x = *y;
	*y=temp;
	cout << "x: " <<*x <<"y: "<<*y<<endl;
	cout << "addrs x: " << &x <<endl;
	cout << "addrs y: " << &y <<endl;

	
	cout << "addrs x: " << x <<endl;
	cout << "addrs y: " << y <<endl;
}

}




//pass by address of...
void swap(int &x, int &y) {
	int temp = x;
	x = y;
	y=temp;
	cout << "x: " <<x <<"y: "<<y<<endl;
	cout << "addrs x: " << &x <<endl;
	cout << "addrs y: " << &y <<endl;
}

//pass by ref
void swap(int &x, int &y) {
	int temp = x;
	cout << "x: " <<x <<"y: "<<y<<endl;
	cout << "addrs x: " << &x <<endl;
	cout << "addrs y: " << &y <<endl;
}

int main () {
	int a = 5;
	int b = 10;


	cout << "addrs a: " <<&a<<endl;
	cout << "addrs b: " <<&b<<endl;

	swap(a,b);

	swap(&a,&b);

	cout << "a: " << a << "b: " <<b <<endl;

	return 0;
}
