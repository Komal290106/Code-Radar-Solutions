#include<stdio.h>

int main(){
    int a,lb;
    scanf("%d",&a);
    lb = a & -a;
    printf("%d",lb);
    return 0;

}