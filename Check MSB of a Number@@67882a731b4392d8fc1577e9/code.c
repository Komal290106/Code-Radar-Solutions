#include <stdio.h>

int main(){
    int a;
    scanf("%u",&a);
    if (a & 0x80000000){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}