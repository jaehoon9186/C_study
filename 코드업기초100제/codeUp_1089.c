#include <stdio.h>

int main(){
    int a, d, n;
    scanf("%d %d %d", &a, &d, &n);

    int count = 1;
    while(count<n){
        a+=d;
        count++;
    }
    printf("%d\n", a);

    return 0;

}