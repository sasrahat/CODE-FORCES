#include<stdio.h>
int main()
{
    int n;
    int a , b , mis = 0, cri = 0;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d %d", &a , &b);
        if(a > b)
        {
            mis++;
        } else if( a < b)
        {
            cri++;
        }
    }
    if( mis > cri)
    {
        printf("Mishka\n");
    } else if( mis < cri)
    {
        printf("Chris\n");
    }else
    {
        printf("Friendship is magic!^^\n");
    }
}