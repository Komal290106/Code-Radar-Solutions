#include <stdio.h>

int main(){
    int a,b,d;
    char c;
    scanf("%d %d %c %d",&a,&b,&c,&d);
    if (c=="+"){
        d=a+b;
        printf("%d",d);
    } else if (c=="-"){
        d=a-b;
        printf("%d",d);
    } else if(c=="*"){
        d=a*b;
        printf("%d",d);
    } else {
        d=a/b;
        printf("%d",d);
    }
    return 0;
}