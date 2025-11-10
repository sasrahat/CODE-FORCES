#include<stdio.h>

int main()

{
    int n , count = 0;
    scanf("%d", &n);
    int num[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d" , &num[i]);
    }
    int max = num[0];
    for(int i = 1 ; i < n ; i++)
    {
        if( max < num[i])
        {
            max = num[i];
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        if( num[i] < max)
        {
            count = count + (max - num[i]);
        }
    }
    printf("%d\n", count);
    return 0;
}