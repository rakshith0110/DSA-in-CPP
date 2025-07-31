#include<iostream>
using namespace std;

/*
int main(){
    string str = "Hello";
    str[0] = str.at(0) + 1;
    cout<<str;
}

*/

int main(){
    int a =10;
    auto lambda = [&] {
        return a += 5;
    };
    cout<<lambda();
}
