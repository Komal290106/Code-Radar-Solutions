#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int re = a & (-1 << b);
    printf("%d",re);
    return 0;
}