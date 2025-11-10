#include<bits/stdc++.h>
using namespace std;

int main(){
    string f;
    int alp[26] = {0}, p, count = 0;
    getline(cin, f);
    for(char ch : f){
        if(ch >= 'a' && ch <= 'z'){
            alp[ch - 'a']++;
        }
    }
    for(int i = 0 ; i < 26; i++){
        if(alp[i] > 0){
            count++;
        }
    } cout << count << "\n";
    return 0;
}