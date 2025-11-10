#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 0 ; i < t ; i++)
    {
        char let;
        scanf(" %c", &let);
        char realstr[11] = "codeforces";
        int flag = 0;
        for( int j = 0 ; j < 10 ; j++)
        {
            
            if(let == realstr[j])
            {
                flag = 1;
                break;
            } else 
            flag = 0;
        }
        if(flag != 0 )
        {
            printf("YES\n");
        } else 
        {
            printf("NO\n");
        }
    }
    return 0;
}