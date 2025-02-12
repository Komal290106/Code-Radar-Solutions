#include<stdio.h>

int main(){
    int num,n,tn;
    scanf("%d %d",&num,&n);
    
     tn = num^(1 << n);
    printf("%d",tn);
    return 0;
}