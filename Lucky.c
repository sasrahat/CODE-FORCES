#include<stdio.h>

int main(){
    int t ;
    scanf("%d", &t);
    for(int i = 0; i < t ; i++){
        char m[6];
            scanf("%s",m);
        if((m[0]+m[1]+m[2]) == (m[3]+m[4]+m[5])){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}