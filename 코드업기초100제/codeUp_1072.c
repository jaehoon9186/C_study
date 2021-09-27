#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int a;
reload:
    scanf("%d", &a);
    printf("%d\n", a);

    n--;
    if(n>0){
        goto reload;
    }

    return 0;
}