#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> v;
    for(int i=0; i<h; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    int l,r,u,d;
    for(int i=0; i<h; i++){
        int ind=-1;
        ind = v[i].find('#');
        if(ind != -1){
            u = i;
            break;
        }
    }
    for(int i=h-1; i>=0; i--){
        int ind=-1;
        ind = v[i].find('#');
        if(ind != -1){
            d = i;
            break;
        }
    }
    for(int i=0; i<w; i++){
        int ind = -1;
        for(int j=0; j<h; j++){
            if(v[j][i]=='#'){
                ind = i;
                break;
            }
        }
        if(ind != -1){
            l = i;
            break;
        }
    }
    for(int i=w-1; i>=0; i--){
        int ind = -1;
        for(int j=0; j<h; j++){
            if(v[j][i]=='#'){
                ind = i;
                break;
            }
        }
        if(ind != -1){
            r = i;
            break;
        }
    }
    bool b=0;
    for(int i=u; i<=d; i++){
        for(int j=l; j<=r; j++){
            if(v[i][j]=='.'){
                b=1;
                break;
            }
        }
        if(b==1){
            break;
        }
    }
    if(b==1){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
}