#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    int x, count = 0;
    cin >> n;
    for(long long int i = n ; i > 0; i/=10){
        x = i % 10;
        if(x == 7 || x == 4){
            count++;
        }
    }
    if(count == 7 || count == 4){
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }
    return 0;
}