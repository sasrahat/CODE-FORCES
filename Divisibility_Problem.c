#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for( long long int i = 0 ; i < t ; i++){
        long long int a, b, c = 0;
        scanf("%lld %lld", &a, &b );
        if(a % b == 0){
            printf("0\n");
        }else{
           c = b - ( a % b);
           printf("%lld\n", c);
            }
        }
      
    
    return 0;
}