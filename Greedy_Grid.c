#include<stdio.h>

int main()

{
    int t;
    scanf("%d", &t);
    for(int i = 0 ; i < t ; i++)
    {
    int n, m;
    scanf("%d %d", &n , &m);
    if((n >= 2 && m >= 2) && (n > 2 || m > 2))
    {
        printf("YES\n");
    } else
    {
        printf("NO\n");
    }
    
} 
return 0;
}