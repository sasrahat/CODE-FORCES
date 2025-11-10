#include<stdio.h>

int checkYear(char year[]){
  if(year[0] != year[1] && year[0] != year[2] && year[0] != year[3] 
               && year[1] != year[2] && year[1] != year[3] 
                         && year[2] != year[3] ){
    return 1;
  } else {
    return 0;
  }
}
int main(){
    int y;
    scanf("%d", &y);
    while(y > 0){
        y = y + 1;
        char year[6];
        sprintf(year, "%d", y);
        if( checkYear(year) != 0){
             printf("%d\n", y);
            break;
         }
    }
    return 0;
}