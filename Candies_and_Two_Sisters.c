#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0 ; i < t ; i++){
        long long int c, w;
        scanf("%lld", &c);
        w = ((c / 2) - 1) + (c % 2 ) ;
        printf("%lld\n", w);
    }
    return 0;
}