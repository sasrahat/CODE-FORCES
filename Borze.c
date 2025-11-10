#include<stdio.h>
#include<string.h>

int main(){
    char num[201], rn[201];
    scanf("%s", num);
    int len = strlen(num);
    int j = 0;
    for(int i = 0 , j = 0; i < len && j < len ; i++){
        
        if(num[j] == '.'){
            rn[i] = '0';
            j = j+1;
        }else if(num[j] == '-'){
            if(num[j+1] == '.'){
                rn[i] = '1';
                j = j+2;
                
            } else if( num[j+1] == '-'){
                rn[i] = '2';
                j = j+2;
                
            }
        }
        printf("%c", rn[i]);
    }
    printf("\n");
    return 0 ;
}