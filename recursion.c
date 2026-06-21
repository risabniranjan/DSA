#include <stdio.h>

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main(){
    int num;
    printf("enter a number to find its factorial: ");
    scanf("%d",&num);
    printf("Factorial of %d is %d\n", num, fact(num));
    return 0;
}
