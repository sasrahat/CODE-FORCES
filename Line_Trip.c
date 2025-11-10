#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 0 ; i < t ; i++)
    {
        int n, d;
        scanf("%d %d", &n , &d);
        int ps[n], max[n+1];
        for(int j = 0 ; j < n ; j++)
        {
            scanf("%d", &ps[j]);
        }
        max[0] = ps[0];
        max[n] = 2*(d - ps[n-1]);
        for(int j = 1 ; j < n-1 ; j++)
        {
            max[j] = (ps[j+1] - ps[j]);
        }
        int rmax = 0;
        for(int j = 0 ; j <= n ; j++)
        {
            if( rmax < max[j])
            {
                rmax = max[j];
            }
        }
        printf("%d\n", rmax);
    }
    return 0;
}