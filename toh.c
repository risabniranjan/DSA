#include<stdio.h>

void TOH(int n, int source, int aux, int dest){
    if(n==1){
        printf("Move disk 1 from %d to %d\n", source, dest);
        return ;
    }
    TOH(n-1, source, dest, aux);
    printf("Move disk %d from %d to %d\n", n, source, dest);
    TOH(n-1, aux, source, dest);
}

int main(){
    int num;
    printf("enter number of disks: ");
    scanf("%d",&num);
    TOH(num, 1, 2, 3);
    return 0;
}
