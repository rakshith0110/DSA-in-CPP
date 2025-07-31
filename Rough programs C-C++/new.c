#include<stdio.h>

int main(){
int dosa=32;
int idli=46;
int parota=35;
int puri=25;
int choice=0;
int qty=0;
float total=0;

    printf("\n===Food Menu===");
    printf("\n1.Dosa - %d Rs\n2.idli - %d Rs\n3.parota - %d Rs\n4.puri - %d Rs\n ",dosa,idli,parota,puri);

    printf("\nEnter Your choice : ");
    scanf("%d",&choice);

    printf("Enter Quantity : ");
    scanf("%d",&qty);

    switch(choice){
    case 1:
        total=dosa*qty;
        printf("The Total bill is  : %.2f",total);
        exit(0);
    case 2:
        total=idli*qty;
        printf("The Total bill is  : %.2f",total);
        exit(0);
    case 3:
        total=parota*qty;
        printf("The Total bill is  : %.2f",total);
        exit(0);
    case 4:
        total=puri*qty;
        printf("The Total bill is  : %.2f",total);
        exit(0);
    default:
        printf("invalid.....!");
        break;
    }


return 0;
}

