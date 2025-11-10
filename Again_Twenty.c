#include<stdio.h>
#include<math.h>

int main()
{
    long long int n ;
    int res = 5;
    scanf("%lld", &n);

    /*for(long long int i = 1 ; i < n ; i++)
    {
        res = res*5;
    }
    res = pow(5 , n);
    res = res % 100;*/

    if ( n > 1)
    res = 25;
    printf("%d\n", res);
    return 0;
}