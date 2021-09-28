#include <stdio.h>

int main(){
    int baduk[20][20] = {0,};
    int n, a, b;
    scanf("%d", &n);
    for(int i=1; i<=n ; i++){
        scanf("%d %d", &a, &b);
        baduk[a][b] = 1;
    }

    
    for(int i=1; i<20; i++){
        for(int j=1; j<20; j++){
            printf("%d ", baduk[i][j]);
        }
        printf("\n");
    }
    return 0;
}