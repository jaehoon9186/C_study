#include <stdio.h>

int main(){
    long long int h, b, c, s;
    scanf("%d %d %d %d", &h, &b, &c, &s);
    printf("%.1f MB", ((h*b*c*s)/8.0)/1024.0/1024.0);
    return 0;

}