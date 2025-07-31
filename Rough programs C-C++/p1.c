/*
Pointers are variable whichcan hold address of another variable.
pointer data type: hold address of another variable of same data type.
*/

#include<stdio.h>
void main(){
    int num=50;
    int *ptr;
    ptr=&num;
    printf("\nValue of num =%d",num);
    printf("\nValue of num =%d",*ptr);
    printf("\nValue of num =%d",&num);
    printf("\nValue of num =%d",ptr);

}
