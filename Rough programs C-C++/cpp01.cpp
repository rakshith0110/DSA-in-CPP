#include<iostream>
using namespace std;

class smallobj{

private:
    int sdata;
public:
    void setdata(int d){
        sdata = d;
    }
    void showdata(){
        cout<<"Data is "<<sdata<<endl;
    }
};


int main(){
    smallobj s1,s2;
    s1.setdata(1000);
    s2.setdata(3000);

    s1.showdata();
    s2.showdata();

    return 0;

}
