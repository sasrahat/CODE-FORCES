#include<stdio.h>

int main(){
    int t, count = 0;
    scanf("%d",  &t);
    for( int i = 0 ; i < t ; i++){
        int a, b;
        scanf("%d %d", &a , &b);
        if( (a+1) < b){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}