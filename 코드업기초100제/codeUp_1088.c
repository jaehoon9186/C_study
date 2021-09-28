#include <stdio.h>

int main(){
    int a, count=1;
    scanf("%d", &a);
    while(count<=a){
        if(count%3!=0){
            printf("%d ", count);
        }
        count++;
    }
    return 0;
}