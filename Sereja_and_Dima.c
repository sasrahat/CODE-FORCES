#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int c[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &c[i]);
    }
    int l = n/2;
    int s = 0, d = 0;
    for(int i = 0; i < n/2; i++)
    {
        if( i % 2 == 0)
        {
            if(c[i] > c[n - 1 -i])
            {
                s = s + c[i];
            } else
            {
                s = s + c[n - 1 - i];
            }
        } else
        {
            if(c[i] > c[n - 1 -i])
            {
                d = d + c[i];
            } else
            {
                d = d + c[n - 1 - i];
            }
        }
    }
    if( n % 2 != 0)
    {
        s = s + c[n/2];
    }
    printf("%d %d\n", s, d);
    return 0;
}