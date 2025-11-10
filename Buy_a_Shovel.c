#include<stdio.h>

int main()
{
    int p, c, i = 1;
    scanf("%d %d", &p , &c);
    for( i = 1 ; i > 0 ; i++)
    {
        if( ((p*i) % 10 == c || ((p*i) % 10) == 0))
        {
            break;
        } 
    }
    printf("%d\n", i);
    return 0;
}