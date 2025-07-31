#include<stdio.h>
#include<stdlib.h>


void main(){
    int n,i;
    int *ptr;
    printf("\nEnter the size of array: ");
    scanf("%d",&n);
    ptr = (int*)malloc(n * sizeof(int));
    printf("\nEnter %d elements \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }

    printf("\nArray Elements are\n");
    for(i=0;i<n;i++){
        printf("|");
        printf("\t%d\t",ptr[i]);
    }
    printf("|");
    free(ptr);
}
