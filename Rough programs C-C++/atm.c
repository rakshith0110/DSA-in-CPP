#include<stdio.h>

int main(){
int choice=0;
int amo=0;
float bal=0;

while(1){

    printf("\n\n1.Show Balance\n2.Deposit\n3.Cancle\n4.Exit\n ");
    printf("\nEnter Your choice : ");
    scanf("%d",&choice);

    switch(choice){
    case 1:
        printf("The balance is : %f",bal);
        break;
    case 2:
        printf("Enter the amount to deposit :");
        scanf("%d",&amo);
        bal=bal+amo;
        printf("Updated balance is : %f",bal);
        break;
    case 3:
        printf("\nGood bye....!");
    case 4:
        exit(0);
    default:
        printf("invalid.....!");
        break;
    }

}

return 0;
}
