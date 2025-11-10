#include<stdio.h>

int  main(){
    int x, sum = 0, i= 0;
    scanf("%d", &x);
    do{
        i+= 5;
        sum = sum + 1;
    } while (i < x);
    printf("%d\n", sum);
}