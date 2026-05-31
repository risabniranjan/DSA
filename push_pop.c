#include <stdio.h>
#include <conio.h>
int stack[5];
int top=0;

int push() {
    int value;
        printf("Enter value to push: ");
        scanf("%d", &value);
        if (top == 5-1) {
            printf("Stack overflow\n"); 
        }
        else {
            stack[top] = value;
            top++;
            printf("Pushed %d to stack\n", value);
        }
    
}
int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
    }
    else {
        top--;
        printf("Popped %d from stack\n", stack[top]);
    }
}

int display() {
    if (top == -1) {
        printf("Stack is empty\n");
    }
    else {
        printf("Stack elements: ");
        for (int i = top-1; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    }
    else {
        printf("Top element: %d\n", stack[top-1]);
    }
}

int main(){
    int choice,c=1;
    while(c==1) {
    printf("1. Push\n2. Pop\n3. Display\n4. Peek\n");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        default:
            printf("Invalid choice\n"); 
    }
    printf("Do you want to continue? (1 for yes, 0 for no): ");
    scanf("%d", &c);
}
}