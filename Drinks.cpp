#include<bits/stdc++.h>
using namespace std;

int main(){
int n, p, sum = 0;
cin >> n;
for(int i = 0 ; i < n ; i++){
    cin >> p;
    sum = sum + p;
}
double per = (double)sum / n;
cout << fixed << setprecision(12) << per << "\n";
return 0;    
}
