#include<stdio.h>
struct student{
        int rollnum;
        int marks;
};

int main(){
    struct student *p;
    p=(struct student*)malloc(sizeof(struct student));
    p->rollnum=55;
    p->marks=78;

    printf("\nThe value at roll number is\t: %d",p->rollnum);
    printf("\nThe value at roll number is\t: %d",p->marks);

}
