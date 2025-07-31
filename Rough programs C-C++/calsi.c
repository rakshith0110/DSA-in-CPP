#include<stdio.h>

int main(){
int a;
int b;
float c;
char op;
printf("Enter the Operation:");r
scanf("%c",&op);
printf("Enter the numbers:");
scanf("%d%d",&a,&b);
switch(op){
case '+':
    c=a+b;
    printf("%d + %d = %f",a,b,c);
    break;
case '-':
    c=a-b;
    printf("%d - %d = %f",a,b,c);
    break;
case '*':
    c=a*b;
    printf("%d * %d = %f",a,b,c);
    break;
case '/':
    c=a/b;
    printf("%d / %d = %f",a,b,c);
    break;

default:
    printf("invalid.....!");
}
return 0;
}
