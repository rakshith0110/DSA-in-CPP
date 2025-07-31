#include<stdio.h>
#include<stdlib.h>

int diffrenceofSum(int n,int m){
    int nondiv=0;
    int div=0;
    int i;
    for(i=1;i<=m;i++){
        if(i % n == 0){
            div = div+i;
        }
        else{
            nondiv = nondiv=i;
        }
    }
    if(nondiv>div)
        return nondiv-div;
    else
        return div-nondiv;
}

int main(){
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int diff = diffrenceofSum(n,m);
    printf("%d",diff);
    return 0;
}
