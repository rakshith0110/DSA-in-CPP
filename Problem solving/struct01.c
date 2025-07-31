#include<stdio.h>

void main(){
    struct student{
        char sname[20];
        int rollnum;
        int marks;
    };
    typedef struct student STD;

    STD s1;

    printf("\nEnter Student name\t:");
    scanf("%s",&s1.sname);
    printf("\nEnter Student rollno\t:");
    scanf("%d",&s1.rollnum);
    printf("\nEnter Student marks\t:");
    scanf("%d",&s1.marks);

    printf("\n===Student Details===");
    printf("\nname\t: %s",s1.sname);
    printf("\nrollno\t: %d",s1.rollnum);
    printf("\nmarks\t: %d",s1.marks);

}
