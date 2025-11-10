#include<stdio.h>
#include<string.h>

int main(){
    char str[101];
    int len, l[26] = {0}, ll, count = 0;
    scanf("%s", str);
    len = strlen(str);
    for(int i = 0 ; i < len ; i++){
       ll = str[i] - 'a';
       l[ll]= l[ll] + 1;
    } 
    for( int i = 0 ; i < 26; i++){
        if(l[i] > 0){
            count++;
        }
    } if(count % 2 == 0){
       printf("CHAT WITH HER!\n");
    }
    else {
        printf("IGNORE HIM!\n");
    }
    
    return 0;
}