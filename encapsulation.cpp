#include <iostream>

using namespace std;

class vehicle{
private:
    int doors;
    int seats;
    int wheels;
    int location;

public:
    //mutators do not return
    void set_doors(int);
    void set_seats(int);
    void set_wheels(int);
    void set_location(int);
    //accessors do return info
    int get_doors();
    int get_seats();
    int get_wheels();
    int get_location();

    void go(int);
     
};

void vehicle::go(int m){
    location +=m;
}

void vehicle::set_doors(int doors) {
    this->doors = doors; //arrow because it comes in as a pointer, not reference

}
void vehicle::set_seats(int s) {
    seats = s;
}
void vehicle::set_wheels(int w) {
    wheels = w;
}
void vehicle::set_location(int l) {
    location = l;
}

int main() {
    //mutators do not return
    vehicle car;
    /* car.doors = 4;
    car.wheels = 4;
    car.seats = 6;
    car.location = 0; */

    car.set_doors(4);
    car.set_seats(6);
    car.set_wheels(4);
    car.set_location(0);

    /*cout << car.doors <<endl;
    cout << car.wheels <<endl;
    cout <<car.seats << endl;*/
    car.go(10);

    return 0;
}
