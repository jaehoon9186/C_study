#include <stdio.h>

void swap(int (*arr)[20], int x, int y){
    for(int i=1;i<20;i++){
        if(arr[x][i]==0){
            arr[x][i]=1;
        }else{
            arr[x][i]=0;
        }

        if(arr[i][y]==0){
            arr[i][y]=1;
        }else{
            arr[i][y]=0;
        }
    }
}

int main(){
    int baduk[20][20]={0,};
    for(int i=1; i<20; i++){
        for(int j=1; j<20; j++){
            scanf("%d", &baduk[i][j]);
        }
    }

    int n, a, b;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        swap(baduk,a,b);
    }
    

    for(int i=1; i<20; i++){
        for(int j=1; j<20; j++){
            printf("%d ", baduk[i][j]);
        }
        printf("\n");
    }
    return 0;
}