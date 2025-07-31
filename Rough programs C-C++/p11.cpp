#include<iostream>
using namespace std;

class person{
protected:
    char name[40];
public:
    void getName(){
        cout<<"Enter name :";
        cin>>name;
    }

    void putName(){
        cout<<"Name is :"<<name<<endl;
    }
    virtual void getData() = 0;
    virtual bool isOutstanding() = 0;

};

class student : public person {
private:
    float gpa;
public:
    void getData(){
        person::getName();
        cout<<"Enter student's GPA ";
        cin>>gpa;
    }

    bool isOutstanding(){
        return(gpa>3.5) ? true : false;
    }
};

class professor : public person{
private:
    int numPubs;
public:
    void getData(){
        person::getName();
        cout<<"Enter number of professor's publication : " ;
        cin>>numPubs;
    }
    bool isOutstanding(){
        return(numPubs > 100) ? true : false;
    }
};

int main(){
    person *persptr[100];
    int n = 0;
    char choice;
    do{
        cout<<"Enter student or professor(s/p):";
        cin>>choice;
        if(choice=='s')
            persptr[n] = new student;
        else
            persptr[n] = new professor;
        persptr[n++]->getData();
        cout<<"Enter another (y/n) ? : ";
        cin>>choice;
    }
    while(choice == 'y');

    for(int j=0;j<n;j++){
        persptr[j]->putName();

        if(persptr[j]->isOutstanding())
            cout<<"this person is outstanding \n";
    }
return 0;
}
/*
he said that he would come;
they said that he would come;
she said that she would cook;
gagan said that he would sing;




be
been
being
*/
