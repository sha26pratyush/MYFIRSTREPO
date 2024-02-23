#include<iostream>

using namespace std;

// create a class
class Room{
    public:
    double length;
    double breadth;
    double height;

    double calculateArea() {
        return length*breadth;
    }

    double calculateVolume() {
        return length*breadth*height;
    }
};

int main() {
     
     //create a object of `Room` class
     Room room1;
     
     //assign values to data members
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;

    //print the calculated values
    cout <<"Area of Room = " << room1.calculateArea() << endl; 
    cout <<"Volume of Room = " << room1.calculateVolume() << endl;

    return 0;
}