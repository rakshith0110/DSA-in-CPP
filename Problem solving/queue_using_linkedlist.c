//Implementation of queue using linked list

#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *next;
};

void enqueue(struct node **front,struct node **rear,int i){
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->next = NULL;
    new->info = i;
    if((*front) == NULL){
        (*front) = new;
        (*rear) = new;
    }
    else{
        (*rear)->next = new;
        (*rear) = new;
    }
}

int del_queue(struct node **front){
    struct node *temp;
    int removed;
    if((front) != NULL){
        temp = *front;
        (*front) = (*front)->next;
        removed = temp->info;
        free(temp);
    }
    return removed;
}

void display(struct node *front){
        printf("\nFront -> ");
        while(front != NULL){
            printf("%d --> ",(*front).info);
            front = (*front).next;
        }
        printf("NULL\n");
}

void main(){
    struct node *front = NULL, *rear = NULL;
    int finished = 0, choice,item;
    do{
        printf("\n\nQueue operations : ");
        printf("\n      1)Insert");
        printf("\n      2)Delete");
        printf("\n      3)Quit");
        printf("\nEnter choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("\nEnter the new element : ");
                scanf("%d",&item);
                enqueue(&front,&rear,item);
                break;

            case 2:
                if(front){
                    printf("The element removed is %d \n",del_queue(&front));
                }
                break;
            case 3:
                finished =1;
        }

        printf("\nThe queue is \n");
        display(front);
        if(front == NULL)
            printf("\nThe queue is empty.");
    }
    while(!finished);
    printf("\n\n");
    while(front != NULL){
        rear = front -> next;
        free(front);
        front = rear;
    }
}
