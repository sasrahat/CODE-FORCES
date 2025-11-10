#include<stdio.h>

int main(){
    int k , w;
    long long int n, cost = 0, need = 0 ;
    scanf("%d %lld %d", &k , &n, &w);
    for(int i = 1 ; i <= w ; i++){
        int nt;
        nt =i * k;
        cost = cost + nt;
    } 
    need = cost - n;
    if( need > 0){
    printf("%lld\n", need);
     } else{
        printf("0\n");
     } 
    return 0;
}