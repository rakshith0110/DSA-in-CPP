/*
Recursive function
Function calling itself.
use if statement to terminate function based on condition.
*/
#include<stdio.h>
long int recfact(int num);

int main(){
    int n;
    long fact;
    printf("Enter an integer: ");
    scanf("%d",&n);
    //using recursion
    fact = recfact(n);
    printf("\nFactorial of %d is %ld",n,fact);
    return 0;
}

long int recfact(int num){
    if(num==0){
        return 1;
    }
    else{
        return recfact(num-1)*num;
    }
}
