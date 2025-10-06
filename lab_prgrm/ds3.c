#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
void insert(int value)
{
    if(rear==MAX-1)
    {
        printf("Queue overflow %d cannot be inserted ",value);

    }
    else
    {
        if(front==-1)
            front=0;
        rear++;
        queue[rear]=value;
        printf("%d inserted into queue\n",value);
    }
}

void del()
{
    if(front==-1 || front>rear)
    {
        printf("Queue underflow ! Queue is empty \n");

    }
    else
    {
        printf("Deleted element : %d \n",queue[front]);
        front++;

    }
}
void display()
{
    if(front==-1 || front>rear )
    {
        printf("Queue is empty \n ");
    }
    else
    {
        printf("Queue elements: \n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d \n",queue[i]);
        }
        printf("\n");
    }
}
void frontel()
{
    if(front==-1 || front>rear )
    {
        printf("Queue is empty \n ");
    }
    else
        printf("The element at front:%d ", queue[front]);
}
void rearel()
{
    if(front==-1 || front>rear )
    {
        printf("Queue is empty \n ");
    }
    else
        printf("The element at rear:%d ", queue[rear]);
}

int main()
{
    int choice,value;
    while(1)
    {
        printf("\n Queue operations \n");
        printf("1.Insert \n");
        printf("2.Delete \n");
        printf("3.Display \n");
        printf("4.Exit \n");
        printf("5.Front element \n");
        printf("6.Rear element \n");
        printf("Enter your choice:");
        scanf("%d",&choice);


    switch(choice)
    {
    case 1:
        printf("enter value to insert:");
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
        printf("Exiting the program");
        return 0;
    case 5:
        frontel();
        break;
    case 6:
        rearel();
        break;
    default:
        printf("Invalid choice try again ");
    }
    }
    return 0;
}
