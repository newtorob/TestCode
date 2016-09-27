#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;


class vehicle {
public:
    int doors;
    int seats;
    int wheels;
    int location;
    //set it to go??
    void go(int);

};

void vehicle::go(int m) {
    location+=m;
}

int main() {
    vehicle car;
    car.doors = 4;
    car.wheels = 4;
    car.seats = 4;
    car.location = 0;

    cout << car.doors << endl;
    cout << car.seats <<endl;
    cout << car.wheels <<endl;

    car.go(10); //how far the car goes
    cout << car.location <<endl;
    return 0;
}
