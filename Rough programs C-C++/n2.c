#include<stdio.h>
void Addval(int *studentmarks);

int main(){
    int i;
    int marks[5];

    printf("\nEnter the marks :\n");
    for(i=0;i<5;i++)
        scanf("\n%d",&marks[i]);
    printf("\nMarks entered are :");
    for(i=0;i<5;i++){
        printf("\n%d",marks[i]);
    }
    Addval(marks);

    //after calling the function
    printf("\n After adding 10 :");
    for(i=0;i<5;i++){
        printf("\n%d",marks[i]);
    }
    return 0;
}

void Addval(int *studentmarks){
    int i;
    for(int i=0;i<5;i++){
        *studentmarks = *studentmarks + 10;
        *studentmarks ++;
    }
}
