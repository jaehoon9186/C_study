#include <stdio.h>

int main(){
    int board[11][11]={0,};
    for(int i=1; i<=10;i++){
        for(int j=1; j<=10; j++){
            scanf("%d", &board[i][j]);
        }
    }
    int x=2, y=2;
    while(1){
        if(board[x][y]==2){
            board[x][y]=9;
            break;
        }
        board[x][y]=9;
        if(board[x][y+1] != 1){
            y++;
        }else if(board[x+1][y] != 1){
            x++;
        }else{
            break;
        }

    }

    for(int i=1; i<=10;i++){
        for(int j=1; j<=10; j++){
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
    return 0;

}