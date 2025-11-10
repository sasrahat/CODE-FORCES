#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n, ca = 0, cd = 0;
    cin >> n;
    string s ;
    cin >> s;
    
    for(long int i = 0 ; i < n ; i++){
        if( s[i] == 'A'){
            ca = ca + 1;
        } else {
            cd = cd + 1;
        }
    }
    if(ca > cd){
        cout << "Anton\n";
    }else if(ca < cd){
        cout << "Danik\n";
    }else{
        cout <<"Friendship\n";
    }

    return 0;
}