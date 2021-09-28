#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int cnt=1;
    while(1){
        if(cnt%a==0 && cnt%b==0 && cnt%c==0){
            printf("%d", cnt);
            break;
        }

        cnt++;
    }
    return 0;
}