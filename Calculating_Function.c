#include<stdio.h>

int main(){
    long long int n, res, e , o , a , b;
    scanf("%lld", &n);
    if( n % 2 == 0){
        a = n / 2;
        b = n / 2;
    } else{
        a = n / 2;
        b = (n / 2) + 1;
    }
    res = (a*(a+1)) - (b*b);
    printf("%lld\n", res);
    return 0;
}