#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    stack<char> st;
    bool b=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='<'){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                b=1;
                break;
            }
            else if((s[i]==')'&&st.top()!='(') || (s[i]==']'&&st.top()!='[') || (s[i]=='>'&&st.top()!='<')){
                b=1;
                break;
            }
            else{
                st.pop();
            }
        }
    }
    if(st.size()!=0 || b==1){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
}