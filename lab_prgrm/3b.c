#include<stdio.h>
#define MAX 5
int queue[MAX];
int rear=-1;
int front=-1;
void insert(int ele){
    if( ( front==0 && rear==MAX-1)|| (front==(rear+1)%MAX)){
        printf("Queue Overflow , element %d cannot be inserted into the queue \n",ele);
    }
    else {
        if(front==-1){
        front=0;
        rear=0;
        }
        else{
            rear=(rear+1)%MAX;
        }
        queue[rear]=ele;
        printf("%d is inserted into the queue \n",ele);
    }
}
void del(){
    if(front==-1){
        printf("Queue is empty \n");
    }
    else{
        printf("Element %d is deleted from the  queue  \n",queue[front]);
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front=(front+1)%MAX;
        }
    }
}
void display(){
    if(front==-1){
        printf("Queue is empty");
    }
    else{
        printf("\n Queue elements : \n");
        int i = front;
        while(1){
            printf("%d ",queue[i]);
            if(i==rear) break;
            i=(i+1)%MAX;
        }
        printf("\n");
    }
}
int main(){
    int choice,value;
    while (1)
    {
        printf("\n CIRCULAR QUEUE OPERATIONS \n");
        printf(" 1.INSERT \n");
        printf(" 2.DELETE \n");
        printf(" 3.DISPLAY \n");
        printf(" 4.EXIT \n");
        printf("Enter your choice :\n");
        scanf("%d",&choice);
        switch (choice){
            case 1:
                printf("Enter the element to be inserted :\n");
                scanf("%d",&value);
                insert(value);
                break;
            case 2:
                del();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;

            default:
                printf("Invalid choice try again ");
        }
    }
    return 0 ;
}
