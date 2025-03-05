#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    for(int i=0; i<5; i++){
        int a;
        cin >> a;
        if(a!=i+1){
            v.push_back(i);
        }
    }
    if(v.size()==0){
        cout << "No" << endl;
    }
    else if(v.size()>2){
        cout << "No" << endl;
    }
    else{
        sort(v.begin(),v.end());
        if(v[0]+1 == v[1]){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}