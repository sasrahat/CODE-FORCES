#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    char word[n];
    int l[26] = {0};
    if (n > 25){
        int ll ;
        scanf("%s", word);
        for ( int i = 0 ; i < n ; i++){
          if(word[i] < 'a'){
            ll = word[i] - 'A';
            l[ll]++;
          } else{
            ll = word[i] - 'a';
            l[ll]++;
          }
        }
        int d = 0;
        for ( int i = 0 ; i < 26 ; i++){
            if(l[i] > 0){
               d++;
            }else{
                d--;
            }
        }
        if(d > 25){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
    }
    else{
        printf("NO\n");
    }
    return 0;
}
