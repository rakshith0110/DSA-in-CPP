/*

A carry is a digit that is transferred to left if sum of digits exeed

*/
#include<stdio.h>

int numberOfCarries(int num1,int num2){
    int carry = 0,sum,p,q,count = 0;
    while((num1 !=0) && (num2 != 0)){
        p = num1 % 10;
        q = num2 % 10;
        sum = carry + p + q;
        if(sum > 9){
            carry = 1;
            count++;
        }
        else{
            carry =0;
        }
        num1 = num1 / 10;
        num2 = num2 / 10;
    }
    while(num1 != 0){
        p = num1 % 10;
        sum = carry + p;
        if(sum > 9){
            carry = 1;
            count++;
        }
        else{
            carry = 0;
        }
        num1 = num1 / 10;
    }

    while(num2 !=0){
        q = num2 % 10;
        sum = carry + q;
        if(sum > 9){
            carry = 1;
            count++;
        }
        else{
            carry = 0;
        }
        num2 = num2 / 10;
    }
    return count;
}

int main(){
    int x,y,a;
    scanf("%d",&x);
    scanf("%d",&y);
    a = numberOfCarries(x,y);
    printf("%d",a);
return 0;
}
