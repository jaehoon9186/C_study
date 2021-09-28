#include <stdio.h>

int main(){
    long long int w, h, b;
    scanf("%d %d %d", &w, &h, &b);
    printf("%.2f MB", (w*h*b)/8.0/1024.0/1024.0);
    return 0;
}