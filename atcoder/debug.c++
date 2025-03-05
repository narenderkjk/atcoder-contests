#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    vector<int> v;
    for(int i=0; i<n-1; i++){
        if(s[i]=='W' && s[i+1]=='A'){
            v.push_back(i+1);
        }
    }
    string ans = s;
    for(int i=0; i<v.size(); i++){
        int ind=v[i];
        ans[ind] = 'C';
        ind--;
        while(ind>=0 && s[ind]=='W'){
            ans[ind]='C';
            ind--;
        }
        ind++;
        ans[ind]='A';
    }
    cout << ans << endl;
}