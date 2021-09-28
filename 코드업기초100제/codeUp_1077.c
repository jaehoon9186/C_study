#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int s = 0;
    while(s < a+1){
        printf("%d\n", s);
        s++;
    }
    return 0;
}