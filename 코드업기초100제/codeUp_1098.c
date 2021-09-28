#include <stdio.h>

void setting(int (*arr)[100], int l, int d, int x, int y){
    
    for(int i=0; i<l;i++){
        if(d==0){
            arr[x][y+i]=1;
        }else{
            arr[x+i][y]=1;
        }
    }

}

int main(){
    int h, w, n;
    int board[100][100] = {0,};
    scanf("%d %d", &h, &w);
    scanf("%d", &n);
    int l, d, x, y;
    for(int i=0; i<n; i++){
        scanf("%d %d %d %d", &l, &d, &x, &y);
        setting(board, l, d, x, y);
    }

    for( int i=1; i<=h; i++){
        for(int j=1; j<=w; j++){
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}