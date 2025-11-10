#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 0 ; i < t ; i++){
        int d[4], count = 0;
        for( int j = 0 ; j < 4 ; j++){
            scanf("%d", &d[j]);
        }
        for( int j = 1 ; j < 4 ; j++){
          if( d[0] < d[j]){
            count++;
          }
        }
        printf("%d\n", count);
    }
    return 0;
}