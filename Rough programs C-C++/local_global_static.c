#include<stdio.h>
void autovar();
int gvar;

void main(){
    int i;
    static gvar = 25;
    for(i =0;i<5;i++)
    {
        autovar();
    }
    printf("\nglobal variable = %d",gvar);
}

void autovar(){
    int num=5;
    gvar++;
    printf("\nvalue of num = %d",num--);
}
