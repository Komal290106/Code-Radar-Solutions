#include <stdio.h>

int main(){
    int a,b,re;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if (c=='+'){
        re = a+b;
        printf("%d",re);
    } else if (c=='-'){
        re = a-b;
        printf("%d",re);
    } else if (c=='*'){
        re = a*b;
        printf("%d",re);
    } else if (a/b){
        re = a/b;
        printf("%d",re);
    } else {
        printf("Error");
    }
    return 0;
}