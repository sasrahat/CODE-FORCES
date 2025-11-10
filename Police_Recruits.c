#include<stdio.h>

int main(){
    long int n, count = 0;
    scanf("%ld", &n);
    long int s[n];

     for(long int i = 0 ; i < n ; i++){
        scanf("%ld", &s[i]);
     }
     for(long int i = 0 ; i < n ; i++){
          if(s[i] < 0 ){
            if(s[i-1]  < 1)           
                count ++;
          }
             else if(s[i] > 0 ){
                count-=(s[i]+s[i+1]);
                //int M = (s[i]+s[i+1]) ;
               // printf("%d", M );
            }
     }
        
     printf("%ld\n", count);
    return 0;
}