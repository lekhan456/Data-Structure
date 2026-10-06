#include <stdio.h>
#define MAX 5
int Queue[MAX];
int front=-1;
int rear=-1;

void insert()
{
    int value;
    if (rear==MAX - 1)
    {
        printf("Queue Overflow\n");
        return;
    }

        printf("Enter the value: ");
        scanf("%d", &value);
        if(front=-1){
            front=0;
        }
        rear++;
        Queue[rear]=value;
        printf("Item inserted successfully\n");

}
void delete()
{
int value;
    if (front==-1 || front>rear)
    {
        printf("Queue Empty\n");
        return;

    }
        printf("Deleted item = %d\n", Queue[front]);
        front++;

        if(front>rear){
            front=-1;
            rear=-1;
        }

}
void display()
{
    int i;
    if (front==-1)
    {
        printf("Queue Empty\n");
        return;
    }

        printf("Queue elements are:\n");
        for (i=front;i<=rear;i++)
        {
            printf("%d\n",Queue[i]);
        }
    printf("\n");
}
int main()
{
    int choice;
    while(1)
    {
        printf("----- QUEUE MENU -----\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insert();
                break;

            case 2:
                delete();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program...");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

