#include<stdio.h>

int natural(int n){
    if(n==0){
        return 0;
    }
    else{
        return natural(n-1)+n;
    }
}

int main(){
    int num;
    printf("enter number of terms: ");
    scanf("%d",&num);
    printf("Sum of first %d natural numbers: %d", num, natural(num));
    return 0;
}
