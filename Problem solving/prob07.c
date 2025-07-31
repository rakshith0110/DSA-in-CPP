#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *next;
};

void enqueue(struct node **front,struct node **rear,int i){
    struct node *new;
    new = (struct node*)maclloc(sizeof(struct node));
    new->next = NULL;
    new->info = i;
    if((*front)==NULL){

    }
}

int main(){

return 0;
}
