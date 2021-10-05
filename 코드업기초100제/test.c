#include <stdio.h>

int main(){

    int n = 50;
    int *p = &n;
    int *p2;
    p2 = &n;
    int *p3 = 123;
    printf("%i\n", n);
    printf("%i\n", *p);
    printf("%i\n", *p2);

    char *s = "abc";
    printf("%s\n", s);
    printf("%p\n", s);
    printf("%p\n", &s);
    printf("%c\n", s[0]); 
    printf("%s\n", &s[0]);  // 주소로 부터 \0 까지 문자열로 출력 
    printf("%p\n", s[0]);
    printf("%p\n", &s[0]);
    printf("%c\n", *s);

}