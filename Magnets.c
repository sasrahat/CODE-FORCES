#include<stdio.h>

int main(){
    int t ;
    scanf("%d", &t);
    int n[t], count = 1;
 
    for( int i = 0 ; i < t ;  i++){
        scanf("%d", &n[i]);
    } 
    for( int i = 0 ; i < t-1 ;  i++){
        if(n[i] != n[i+1]){
            count++;
        }
     }
 printf("%d\n", count);
    return 0;
}