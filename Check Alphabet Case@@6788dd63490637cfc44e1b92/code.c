#include <stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if ('A'>=ch && ch<='Z'){
        printf("Uppercase");
    }
    else if (ch >= 'a' && ch<='z'){
        printf("Lower case");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}