#include<stdio.h>

int queue[3];
int front=-1;
int rear=-1;

int enqueue() {
    int value;
    printf("Enter value to enqueue: ");
    scanf("%d", &value);
    if (rear == 3-1) {
        printf("Queue overflow\n");
    }
    else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("Enqueued %d to queue\n", value);
    }
}

int dequeue() {
    if (front == -1 || front > rear) {
        front=rear=-1;
        printf("Queue underflow\n");
    }
    else {
        printf("Dequeued %d from queue\n", queue[front]);
        front++;
        for (int i = front; i <= rear; i++) {
            queue[i-1] = queue[i];
        }
    }
}   

int search() {
    int value, found=0;
    printf("Enter value to search: ");
    scanf("%d", &value);
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    }
    else {
        for (int i = front; i <= rear; i++) {
            if (queue[i] == value) {
                printf("Value %d found at position %d\n", value, i-front+1);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Value %d not found in queue\n", value);
        }
    }
}

int display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    }
    else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice,c=1;
    while(c==1) {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Search\n");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                search();
                break;    
            default:
                printf("Invalid choice\n");
        }
        printf("Do you want to continue? (1 for yes, 0 for no): ");
        scanf("%d", &c);
    }
    return 0;
}