#include<bits/stdc++.h>
using namespace std;

int main(){
    long double n;
    cin >> n;
    vector<long double> v(n);
    for(long double i=0; i<n; i++){
        cin >> v[i];
    }
    if(n==2){
        cout << "Yes" << endl;
    }
    else{
        bool b=0;
        for(long double i=1; i<n-1; i++){
            if(v[i-1]*v[i+1] != v[i]*v[i]){
                b=1;
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
    // long double r = v[1]/v[0];
    // bool b=0;
    // for(long double i=1; i<n; i++){
    //     if(v[i-1]*r != v[i]){
    //         b=1;
    //         break;
    //     }
    // }
    // if(b==0){
    //     cout << "Yes" << endl;
    // }
    // else{
    //     cout << "No" << endl;
    // }
}