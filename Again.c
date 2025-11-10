#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0 ;  i < t ; i++){
        int x, y;
        scanf("%d", &x);
        y = (x % 10) + (x / 10);
        printf("%d\n", y);
    }
    return 0;
}