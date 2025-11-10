#include<stdio.h>
#include<string.h>

int main(){
char str1[101], str2[101];
scanf("%s", str1);
scanf("%s", str2);
int len = strlen(str1);
for(int i = 0; i < len ; i++){
    if(str1[i] < 'a'){
        str1[i] = str1[i] + 32;
    } 
    if(str2[i] < 'a'){
        str2[i] = str2[i] + 32;
    }
    
if(str1[i] > str2[i]){
    printf("1\n");
    return 0;
} else if(str1[i] < str2[i]){
    printf("-1\n");
    return 0;
  }
}
 printf("0\n");
    return 0;

}