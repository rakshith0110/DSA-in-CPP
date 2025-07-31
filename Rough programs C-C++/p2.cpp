
/*
Create a class 'Employee' having the following methods and print the final salary.
a - 'getinfo()' which takes the salary,number of hours of work per day of employee as parameter
b - 'AddSal()' Which adds Rs100 to salary of the wm

*/

#include<iostream>
using namespace std;

class Person{
public:
    int age;
    string name[20];
    getinfo(int age,string name){
        age = age;
        name = name;
    }

    void display(){
    cout<<"Name : "<<name<<endl;
    cout<<"age : "<<age<<endl;
    }


};

int main(){
    Person p1;
    cout<<"Person 1 : "<<endl;
    p1.getinfo(23,"rakshith");
    p1.display();
    return 0;
}
