#include<stdio.h>

void sort(long long int array[], int size)
{
    for(int i = 0 ; i < size - 1 ; i++)
    {
        for(int j = 0 ; j < size - 1 - i ; j++)
        {
            if(array[j] > array[j+1])
            {
                long long int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 0 ; i < t ; i++)
    {
        int n;
        scanf("%d", &n);
        long long int array[n];
        for(int j = 0 ; j < n ; j++)
        {
            scanf("%lld", &array[j]);
        }
        int size = sizeof(array)/ sizeof(array[0]);
        sort(array, size);
        int x = 0;
        for(int i = 0 ; i < n-1 ; i++ )
        {
            if( array[i] >= array[i+1])
            {
                x = 1;              
            }
            
        }
        if(x)
        {
            printf("NO\n");
        } else
        {
             printf("YES\n");
        }
    }    
    return 0;
}