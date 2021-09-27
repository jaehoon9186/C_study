#include <stdio.h>

int main(){
    char a;
    scanf("%c", &a);
    char b = 'a';

    while(b<a+1){
        printf("%c ", b);
        b++;
    }

    return 0;
}