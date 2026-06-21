#include<stdio.h>

int fib(int n){
    if (n<=1){
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}

int main(){
    int num;
    printf("enter number of terms: ");
    scanf("%d",&num);
    printf("Fibonacci series: ");
    for(int i=0; i<num; i++){
        printf("%d ", fib(i));
    }
    return 0;
}