#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 0 ; i < t ; i++)
    {
        long long int n , c, count = 0;
        scanf("%lld %lld", &n , &c );
        long long int w[n];
        for(long long int j = 0 ; j < n ; j++)
        {
            scanf("%lld", &w[j]);
        }
        long long int mul = 1;
        for(long long int j = 0 ; j < n ; j++)
        {
            
            w[j] = w[j]*mul;
            if(w[j] > c)
            {
                count++;
            }
            mul = mul * 2;
        }
        printf("%lld\n", count);
    }
    return 0;
}