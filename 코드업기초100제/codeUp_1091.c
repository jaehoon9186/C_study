#include <stdio.h>

int main(){
    long long int a;
    int m, d, n;
    scanf("%lld %d %d %d", &a, &m, &d, &n);
    
    for(int i=1; i<n; i++){
        a*=m;
        a+=d;
    }

    printf("%lld", a);

    return 0;
}