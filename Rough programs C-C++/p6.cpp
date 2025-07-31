#include<iostream>
using namespace std;

class A{
private:
    int privDataA;
protected:
    int proDataA;
public:
    int pubDataA;
    Counter(){
        cout<<"Constructor of class Counter "<<endl;
        count = 0;
    }
    Counter(int c){
        count = c;
    }
    int get_count(){
        return count;
    }

    Counter operator ++(){
        return Counter(++count);
    }
};

class CountDn : public Counter{
public:
    CountDn():Counter(){
        cout<<"Constructor of class CountDn "<<endl;
    }
    CountDn(int c):Counter{

    }

    CountDn operator --(){
        return CountDn(--count);
    }
};


int main(){
    int a;
    B objB;
    a  = objB.privDataA;
    a  = objB.proDataA;
    a  = objB.pubDataA;

    C objC;
    a  = objC.privDataA;
    a  = objC.p

return 0;
}
