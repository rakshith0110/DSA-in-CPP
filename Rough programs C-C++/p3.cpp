/*

write a Java program to create a class called "Bank" with a collection of accounts and methods to add remove
accounts, and to deposit and withdraw. also define a class called "Account" to maintain account details of
a particular customer.

*/

#include<iostream>
using namespace std;

class Sdata{
private:
    static int count;

public:
    Sdata(){
        count++;
    }

    int getcount(){
        return count;
    }
};
int Sdata::count=0;
int main(){
    Sdata s1,s2,s3;
    cout<<"S1 - Count = "<<s1.getcount()<<endl;
    cout<<"S2 - Count = "<<s2.getcount()<<endl;
    cout<<"S3 - Count = "<<s3.getcount()<<endl;
return 0;
}
