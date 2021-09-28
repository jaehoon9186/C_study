#include <stdio.h>

int main(){
    int a, b;
    int check[24]={0,};
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        scanf("%d", &b);
        check[b]+=1;
    }

    for(int i=1; i<24; i++){
        printf("%d ", check[i]);
    }

    return 0;
}