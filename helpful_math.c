#include<stdio.h>
#include<string.h>

int main(){
    char math[101];
    scanf("%s", math);
    int len = strlen(math), m1 = 0, m2 = 0, m3= 0;
    for(int i = 0 ;i < len ; i+=2){
        if((math[i] - '0')>1){
            if((math[i]-'0')>2){
                m3 = m3 + 1;
            } else {
                m2= m2+1;
            }
        } else {
            m1 = m1 + 1;
        }
    }
    for(int i = 0 ; i < m1 ; i++){
        printf("1");
        if(i < (m1-1)){
            printf("+");
        }
    }
    if(m1 != 0 && (m2 != 0 || m3 !=0)){
            printf("+");
        }

    for(int i = 0 ; i < m2 ; i++){
        printf("2");
        if(i < (m2-1)){
            printf("+");
        }
    }

    if(m3 != 0 && m2!=0){
            printf("+");
        }

    for(int i = 0 ; i < m3 ; i++){
        printf("3");
        if(i < (m3-1)){
            printf("+");
        }
    }
    printf("\n");
}