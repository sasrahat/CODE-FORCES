#include<stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x , &y);
    char sf[x][y];
    for(int i = 0 ; i < x ; i++)
    {
        if(i % 2 == 0)
            {
                for(int j = 0 ; j < y ; j++)
                {
                    printf("#");
                }
                printf("\n");
            }
            else if( i % 2 != 0 && (i+1) % 4 == 0)
            {
                 printf("#");
                 for(int j = 0 ; j < y-1 ; j++)
                {
                    printf(".");
                }
                printf("\n");
            }
            else
            {
                 for(int j = 0 ; j < y-1 ; j++)
                {
                    printf(".");
                }
                printf("#\n");
            }
    }

    return 0;
}