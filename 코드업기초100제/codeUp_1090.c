#include <stdio.h>

long long int square(int a, int n){
    long long int result = 1;
    for(int i=0; i<n; i++){
        result = result * a;
    }
    return result;
}

int main(){
    int a, r, n;
    scanf("%d %d %d", &a, &r, &n);
    long long int answer = a*square(r,n-1);
    printf("%lld", answer);

    return 0;
}
