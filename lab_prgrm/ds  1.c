#include<stdio.h>
#include<stdlib.h>
#define MAX 5 
int arr[MAX];
int top = -1;
void push(int item)
{ 
  if (top == MAX - 1)
    printf("Stack Overflow! Item cannot be added");
  else{
  top = top + 1;
  arr[top] = item;}
}
void pop()
{
    if (top == -1)
       printf('Stack underflow! stack is empty');
    else
    {
        int item;
        item = arr[top];
        top -= 1;
        printf("Popped item is %d",item);
    }
}
void display()
{
    int i;
    if (top == -1)
    {
        printf("Stack is empty");

    }
    else{
    for (i = top; i >= 0; i--)
    {
        printf("%d",arr[i]);
    }
}
}
int main()
{   int choice = 1;
    int item;
    while (choice == 1)
    {
        printf("------Stack Operations------\n");
        printf("1. Push");
        printf("2. Pop");
        printf("3. Display");
        printf("4. Exit");
        printf("Enter your choice:");
        scanf("%d",choice);
        switch (choice)
        {
            case 1:
                printf("Enter item to be pushed");
                scanf("%d",item);
                push(item);
                choice = 1;
                break;
            case 2:
                printf("Enter item to be popped");
                scanf("%d",item);
                pop(item);
                choice = 1;
                break;
            case 3:
                display();
                choice = 1;
                break;
            case 4:
                choice = 0;
                exit(0);
        }
    }
    return 0;
}