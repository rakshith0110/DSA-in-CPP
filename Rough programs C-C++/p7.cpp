/*

David and Emily are car enthusiasts who love collection vintage cars. To keep
track of their collection,David writes a C++ Program where each car is represented as an object with details
about its brand and manufacturing year. they can quickly input new cars and display
their collection details at any time.
Define a class car with attributes brand(string) and year (integer).Implement the following
member function:

Constructor to initialize brand and year.
display Info(); Display the brand and year of the car.

Input Format

Input consists of two data types,
First is the brand name & next is the year.

Output format:



*/

#include<iostream>
#include<string>
using namespace std;

class Car{
public:
    int  year;
    string brand;

    Car(string b,int y){
        brand = b;
        year = y;
    }

    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

int main(){
    Car car1("Ford Mustang",1970);
    Car car2("Chevrolet camaro",1969);

    cout<<"\nCar 1 details :"<<endl;
    car1.displayInfo();

    cout<<"\nCar 2 details :"<<endl;
    car2.displayInfo();
return 0;
}
