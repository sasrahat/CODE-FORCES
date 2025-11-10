#include<stdio.h>

int main(){
    int a, b, n = 0;
    scanf("%d %d", &a , &b);
    for(int i = 1; i > 0 ; i++  ){
    a = a*3;
    b = b*2;
    n++;
    if(a > b)
        break ;
    }
    printf("%d\n", n);
    return 0;
}