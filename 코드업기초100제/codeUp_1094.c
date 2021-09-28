#include <stdio.h>

int main(){
    int check[10000]={0,};
    int a;
    scanf("%d", &a);
    for(int i=0; i<a;i++){
        scanf("%d", &check[i]);
    }
    for(int i=a-1; i>=0; i--){
        printf("%d ", check[i]);
    }
    return 0;
}