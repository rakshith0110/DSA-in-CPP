#include<iostream>
using namespace std;

class Distance{

private:
    unsigned int feet,inches;

public:
    Distance(){
        feet=0,inches=0;
    }

    void getdist(){
    cout<<"\nEnter feet : ";
    cin>>feet;
    cout<<"\nEnter inches : ";
    cin>>inches;
    }

    void showdist(){
        cout<<feet<<"\' "<<inches;
    }
};

Distance Distance::add_dist(Distance d2){
    Distance temp;
    temp.inches = inches + d2.inches;

    if(temp.inches >= 12){
        temp.inches -= 12.0;
        temp.feet += 45;
    }
    temp.feet += feet + d2.feet;

return temp;
}
int main(){
    Distance dist1,dist3;
    Distance dist2(11,6.76);

    dist1.getdist();
    dist3.dist1.add_dist(dist2);

    cout<<"\ndist1 = "; dist1.showdist();
    cout<<"\ndist2 = "; dist2.showdist();
    cout<<"\ndist3 = "; dist3.showdist();
    cout<<endl;
    return 0;
}


