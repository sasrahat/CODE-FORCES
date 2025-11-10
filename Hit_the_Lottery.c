#include<stdio.h>

int main()
{
    int n, count = 0, note[5] = {100 , 20 , 10 , 5, 1}, i = 0;
    scanf("%d", &n);
    while( n > 0)
    { 
        count = count + ( n / note[i]);
        n = n % note[i];
        i++;
    }
    printf("%d\n", count);
    return 0;
}