#include<stdio.h>

void natural(int n){
    if(n==0){
        return ;
    }
    else{
    printf("%d ", n);
    natural(n-1);

    }
}

int main(){
    int num;
    printf("enter number of terms: ");
    scanf("%d",&num);
    printf(" n natural numbers: ");
    natural(num);
    return 0;
}
