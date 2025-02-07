#include <stdio.h>

int main(){
    char gd;
    scanf("%c",&gd);
    if (gd=='A'){
        printf("Excellent");
    } else if (gd=='B'){
        printf("Good");
    } else if (gd=='C'){
        printf("Average");
    } else if (gd=='D'){
        printf("Below Average");
    } else {
        printf("Fail");
    }
    return 0;
}