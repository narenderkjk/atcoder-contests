#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,q;
    cin >> n >> q;
    vector<long long int> v(n+1,1);
    vector<long long int> l(n+1);
    for(long long int i=0; i<=n;  i++){
        l[i]=i;
    }
    long long int m=0;
    for(long long int i=0; i<q; i++){
        long long int a;
        cin >> a;
        if(a==2){
            cout << m << endl;
        }
        else{
            long long int p,h;
            cin >> p >> h;
            if(v[l[p]]>1)m--;
            if(v[h]>1)m--;
            v[h]++;
            if(v[l[p]]>0) v[l[p]]--;
            if(v[l[p]]>1) m++;
            if(v[h]>1) m++;
            l[p] = h;
        }
    }
}