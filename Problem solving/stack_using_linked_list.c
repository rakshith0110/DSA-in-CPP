//implementation of stacks using linked list

#include<stdio.h>
#include<stdlib.h>

struct list_element{
    int item;
    struct list_element *next;
};

typedef struct list_element node;

int menu(){
    int choice;
    do{
        printf("\n\nMain Menu: \n");
        printf("\n      1 - Push \n");
        printf("\n      2 - Pop \n");
        printf("\n      3 - End \n");
        printf("\n Enter the choice :");
        scanf("%d",&choice);

        if(choice < 1 || choice > 3)
            printf("\nInvalid choice - Try again \n");
    }
    while(choice < 1 || choice > 3);

    printf("\n");
    return(choice);
}

void display(node *record){
    if(record != NULL){
        printf(" -> %d",record->item);
        display(record->next);
    }
}

node *push(node *first){
    node *newrecord;
    int newitem;
    printf("New data item \t");
    scanf("%d",&newitem);

    //allocate space
    newrecord = (node *)malloc(sizeof(node));
    newrecord->item = newitem;
    //assign pointer to new record
    newrecord->next = first;
    first = newrecord;
    return(first);
}

node *pop(node *first){
    node *temp;
    int target;
    if(first == NULL)
        printf("\nStack empty");
    else{
    printf("Element deleted is : %d ",first->item);

    temp = first->next;
    free(first);
    first = temp;
    printf("\nStack after poping :\n");
    display(first);
    }
    return(first);
}

void main(){
    node *start;
    int choice;
    start = NULL;
    do{
        choice = menu();
        switch(choice){
            case 1:
                start = push(start);
                printf("\n Stack after pushing :\n");
                display(start);
                continue;
            case 2:
                start = pop(start);
                continue;

            default:
                printf("End of computation\n");

        }
    }
    while(choice !=3);
}
