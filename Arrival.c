#include<stdio.h>

int Max( int num[], int n)
{
    for(int i = 0 ; i < n - 1 ; i++)
    {
        for(int j = 0 ; j < n - i - 1; j++)
        {
            if(num[j] < num[j+1])
            {
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    return num[0];
}

int Mini(int num[], int n)
{
    return num[n-1];
}

int main()
{
    int n;
    scanf("%d", &n);
    int num[n], num2[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &num[i]);
        num2[i] = num[i];
    }

    int max = Max(num , n);
    int mini = Mini(num , n);
    int posMax = -1, posMini = -1, count ;

    for(int i = 0 ; i < n ; i++)
    {
        if(max == num2[i])
        {
            posMax = i;
            break;
        }
       
    }

    for(int i = 0 ; i < n ; i++)
    {
         if( mini == num2[i])
        {
            posMini = n - i - 1;
        }
    }

    count = posMax + posMini;
   // printf("%d %d %d", count, posMax , posMini);
    if (1 == 1)
     printf("%d\n", count);
   
     
    return 0;
}