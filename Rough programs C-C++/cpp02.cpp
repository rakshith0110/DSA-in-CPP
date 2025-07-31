#include<iostream>
using namespace std;

class part{

private:
    int modelnumber;
    int partnumber;
    float cost;

public:
    void setpart(int mn,int pn,float c){
    modelnumber = mn;
    partnumber = pn;
    cost = c;
    }

    void showpart(){
        cout<<" Model   : "<<modelnumber;
        cout<<" Part    : "<<partnumber;
        cout<<" Cost    : "<<cost<<endl;
    }
};


int main(){
    part p1,p2;
    p1.setpart(1000,272,590.60);
    p2.setpart(700,672,650.60);

    p1.showpart();
    p2.showpart();

    return 0;

}

