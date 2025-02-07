#include <stdio.h>

int main(){
    int a,b;
    char c;
    int re;
    scanf("%d %d %c %d",&a,&b,&c,&re);
    if (c=='+'){
        re = a+b;
        printf("%d",re);
    } else if (c=='-'){
        re = a-b;
        printf("%d",re);
    } else if (c=='*'){
        re = a*b;
        printf("%d",re);
    } else {
        re = a/b;
        printf("%d",re);
    }
    return 0;
}