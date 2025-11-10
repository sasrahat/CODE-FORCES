#include<stdio.h>

int main(){
    int m[5][5], x, y , z;
    for(int i = 0 ; i < 5 ; i++){
        for( int j = 0 ; j < 5 ; j++){
            scanf("%d", &m[i][j]);
            if(m[i][j] == 1){
                x = i+1;
                y = j+1;
            }
        }
    }
    if(x > 3){
        if(y > 3){
            z = (x - 3) + ( y - 3);
        printf("%d\n", z );}
        else {
            z = (x - 3) + ( 3 - y);
            printf("%d\n", z );
        }
    }else{
        if(y > 3){
            z = (3 - x) + ( y - 3);
        printf("%d\n", z );}
        else {
            z = (3 - x) + ( 3 - y);
            printf("%d\n", z );
        }
    }
    return 0;
}