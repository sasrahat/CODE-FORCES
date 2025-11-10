#include<stdio.h>

int main(){
    int n ;
    scanf("%d", &n);
    int d[100] , total = 0;
    double per;
    for(int i = 0; i < n ; i++){
        scanf("%d", &d[i]);
        total = total + d[i];
    } 
    double m = (double)n;
    per = ((double)total / m);
    printf("%.12lf\n", per);
    return 0;
}