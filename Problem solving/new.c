#include<stdio.h>

struct person{
    char sname[20];
    int salary;
};

struct person readin(struct person p1);
void printout(struct person p1);

void main(){
    struct person per;
    per = readin(per);
    printout(per);
}
struct person readin(struct person p1){
    printf("\nEnter name : ");
    scanf("%s",p1.sname);
    printf("\nEnter salary : ");
    scanf("%d",&p1.salary);
    return p1;
};

void printout(struct person p1){
    printf("%s\n",p1.sname);
    printf("%d\n",p1.salary);
}
