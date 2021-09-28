#include <stdio.h>

int main(){
    int n, min;
    int check[10000] = {0,};
    scanf("%d", &n);
    for(int i=0; i < n; i++){
        scanf("%d", &check[i]);
        if(i==0){
            min = check[i];
        }
        else{
            if(min > check[i]){
                min = check[i];
            }
        }

    }
    printf("%d", min);
    return 0;
}