#include <stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if ('A'>=ch && ch<='Z'){
        printf("Uppercase");
    }
    else {
        printf("Lower case");
    }
    return 0;
}