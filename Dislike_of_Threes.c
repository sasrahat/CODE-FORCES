#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t ; i++)
    {
        int k, n = 0;
        scanf("%d", &k);
        for(int j = 0 ; j < k ; j++)
        {
            if( n % 10 == 3 || n % 3 == 0)
            {   
                k++;
            } 
            n++;
        }
        printf("%d\n", n-1);
    }
    return 0;
}