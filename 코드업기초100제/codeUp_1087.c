#include <stdio.h>

int main(){
    int a, sum =0, count=0;

    scanf("%d", &a);

    while(sum<a){
        count++;
        sum += count;
    }
    printf("%d", sum);
    return 0;
}