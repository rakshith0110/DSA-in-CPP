#include<stdio.h>

void main(){
    int arr[10];
    struct student{
        char sname[20];
        int rollnum;
        int marks;
    };

    printf("\nsize of int = %ld",sizeof(int));
    printf("\nsize of float = %ld",sizeof(float));
    printf("\nsize of char = %ld",sizeof(char));
    printf("\nsize of double = %ld",sizeof(double));

    printf("\nsize of arr = %ld",sizeof(arr));
    printf("\nsize of struct student = %ld",sizeof(struct student));

}

