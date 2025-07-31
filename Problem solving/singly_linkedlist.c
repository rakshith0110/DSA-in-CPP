//singly linked list

#include<stdio.h>
#include<stdlib.h>

struct NODE{
    int data;
    struct NODE *next;
};

void add_front(struct NODE **front,struct NODE *new_node);
int delete_pos(struct NODE **front,int pos);
int delete_elm(struct NODE **front,int data);
void cleanup(struct NODE *front);
int get_option();
int get_data();
void display_list(struct NODE *front);

int main(){
    struct NODE *front=0;
    struct NODE *new_node;

    int data,pos;
    int min,max;

    while(1){
        switch(get_option()){
            case 1:
                data = get_data();
                new_node = (struct NODE*)malloc(sizeof(struct NODE));
                new_node-> data = data;
                add_front(&front,new_node);
                break;

            case 2:
                printf("\nEnter the position:");
                scanf("%d",&pos);
                if(delete_pos(&front,pos)==0){
                    printf("\nThere are no elements at %d\n",pos);
                }
                break;
            case 3:
                data = get_data();
                if(delete_elm(&front,data)==0)
                    printf("\nThere are no elements whose value is %d\n",data);
                break;

            case 4:
                cleanup(front);
                exit(0);
        }
        display_list(front);
    }
    return 0;
}

void add_front(struct NODE **front,struct NODE *new_node){
    new_node->next = *front;
    *front = new_node;
}

//Delete position
int delete_pos(struct NODE **front,int pos){
    struct NODE *cur,*prev;
    if(pos == 0){
        cur = *front;
        *front = (*front)->next;
    }
    else{
        int i=0;
        cur = *front;
        while(i < pos && cur){
            prev = cur;
            cur = cur->next;
        }

        if(cur){
            prev->next = cur->next;
        }

        if(cur){
            free(cur);
            return 1;
        }
        else{
            return 0;
        }
    }
}

//delete element based on value
int delete_elm(struct NODE **front,int data){
    struct NODE *cur,*prev;
    cur = *front;
    while(cur && cur->data != data){
        prev = cur;
        cur = cur->next;
    }

    if(cur){
        if(cur == *front){
            *front = (*front)->next;
        }
        else{
            prev->next = cur->next;
        }
    free(cur);
    return 1;
    }
    else{
        return 0;
    }
}

void cleanup(struct NODE *front){
    struct NODE *cur = front;
    while(front){
        front = front->next;
        free(cur);
    }
}

int get_option(){
    int option;
    do{
        printf("1: Insert at the beginnig of the list\n");
        printf("2: Delete an element at a given position\n");
        printf("3: Delete an element with a given value\n");
        printf("4: Exit\n");
        scanf("%d",&option);
    }
    while(option < 0 || option > 4);

    return option;
}

int get_data(){
    int data;
    printf("\n Enter the data : ");
    scanf("%d",&data);
    return data;
}

void display_list(struct NODE *front){
    struct NODE *cur = front;
    printf("\n The list is.........\n");
    if(!cur){
        printf("\nList is empty\n");
    }
    else{
        while(cur){
            printf("%d",cur->data);
            if(cur->next){
                printf("---> ");
            }
            cur = cur->next;
        }
        printf("\n\n");
    }
}
