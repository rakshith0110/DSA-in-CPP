#include<iostream>
using namespace std;

class Counter{
protected:
    int count;
public:
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
    CountDn c1;
    CountDn c2(100);
    cout<<"\n C1 = "<<c1.get_count();
    cout<<"\n C1 = "<<c1.get_count();

    ++c1; ++c1; ++c1;
    cout<<"\nC1 = "<<c1.get_count();

    --c1; --c1;
    cout<<"\nC1 = "<<c1.get_count();

return 0;
}
