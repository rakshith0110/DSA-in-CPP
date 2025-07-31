/*
Create a class 'Employee' having the following methods and print the final salary.
a - 'getinfo()' which takes the salary,number of hours of work per day of employee as parameter
b - 'AddSal()' Which adds Rs100 to salary of the wm

*/

#include<iostream>
using namespace std;

class Employee{
private:
    float sal;
public:
    int workhour;
    Employee(){
        sal = 100;
    }

    void getinfo(){
        cout<<"Enter the number of hours of work per day of employee :";
        cin>>workhour;
    }

    void addsal(){
    if(workhour >=6){
        sal += 200 * workhour;
    }
    else{
        cout<<"working hour is less then 6 "<<endl;
    }
    }

    void display(){
    cout<<"total salary is : "<<sal<<endl;
    }


};

int main(){
    Employee e1;
    e1.getinfo();
    e1.addsal();
    e1.display();
    return 0;
}
