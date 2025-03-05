#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string t;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='2'){
            t.push_back('2');
        }
    }
    cout << t << endl;
}