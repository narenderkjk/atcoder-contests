#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    vector<pair<int,string>> v;
    while(tt--){
        string s;
        cin >> s;
        v.push_back({s.size(),s});
    }
    sort(v.begin(),v.end());
    string ans="";
    for(int i=0; i<v.size(); i++){
        ans += v[i].second;
    }
    cout << ans << endl;
}