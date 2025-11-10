#include<stdio.h>
#include<string.h>

int main(){
    char pos[101];
    scanf("%s", pos);
    int len = strlen(pos);
    int count = 1;
    for( int i = 1; i <= len; i++){
        if(pos[i] == pos[i-1]){
            count++;
            if( count > 6){
               printf("YES\n");
               return 0;
            }
        } else {
            count = 1;
        }
    } 
        printf("NO\n");
    
    return 0;
}