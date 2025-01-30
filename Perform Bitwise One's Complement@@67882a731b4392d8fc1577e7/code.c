#include <stdio.h>

int main(){
    int a;
    scanf("%u",&a);
    printf("%u",a=~a);
    return 0;
}