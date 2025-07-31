#include<stdio.h>
void print_array(int arr[],int n);

int main(){
    int i;
    int arr[5] = {10,20,30,40,50};
    print_array(arr,5);
    printf("\nPrint in main function\n");
    for(i=0;i<5;i++)
        printf("%d",arr[i]);
}

void print_array(int arr[],int n){
    int i;
    for(i=0;i<n;i++)
}
