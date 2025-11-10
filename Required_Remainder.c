#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0 ; i < t ; i++){
        long long int x , y , n , res, ans;
        scanf("%lld %lld %lld", &x , &y , &n); 
        res = (n  / x );
        ans = (res * x) + y;
        if(ans > n){
            ans = ans - x;
        }
        printf("%lld\n", ans);
    }
    return 0;
}