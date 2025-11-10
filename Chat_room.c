#include<stdio.h>
#include<string.h>

int main(){
    char w[101], fw[26];
    scanf("%s", w);
    int ll , l[26] = {0};
    int len = strlen(w);
    for( int i = 0 ; i < len ; i++){
        ll = w[i]-'a';
        l[ll]++;
    }
    for(int i = 0; i < 26 ; i++){
        if(l[i] > 0){
            fw[i] = l[i];
        }
        printf("%s", fw);
    }
    return 0;
}