#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for( int i = 0 ; i < t ; i++)
    {
        int n , sum = 0;
        scanf("%d", &n);
        int num[n];
        for(int j = 0 ; j < n ; j++ )
        {
            scanf("%d", &num[j]);
            sum = sum + num[j];
        }
        if(sum % 2 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}