// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   int n,m;
//   cin >> n>> m;
//   vector<string> vn,vm;
//   for(int i=0; i<n; i++){
//     string s;
//     cin >> s;
//     vn.push_back(s);
//   }
//   for(int i=0; i<m; i++){
//     string s;
//     cin >> s;
//     vm.push_back(s);
//   }
//   int a = -1,b = -1;
// //   int i=0;
// //   int c=0;
// //   while(i<n-m){
// //     int p = -1;
// //     p = vn[i].find(vm[c]);
// //     if(p != string::npos){
// //       bool x=0;
// //       for(int j=0; j<m; j++){
// //         int res = vn[i+j].find(vm[c]);
// //         cout << res << "pos" << endl;
// //         if(res != string::npos){
// //           c++;
// //         }
// //         else{
// //           x=1;
// //           break;
// //         }
// //       }
// //       if(x==0){
// //         // cout << i << " yes " << p << endl; 
// //         a = i+1;
// //         b = p+1;
// //         break;
// //       }
// //       else{
// //         i++;
// //       }
// //     }
// //     else{
// //       i++;
// //     }
// //     // if(a!=-1 && b!=-1){
// //     //     a++;
// //     //     b++;
// //     //     break;
// //     // }
// //   }
// int x=-1;
//     for(int i=0; i<n; i++){
//         int c=0;
//         for(int j=0; j<m; j++){
//             if(vn[i][c]==vm[j][c]){
//                 c++;
//             }
//             else{
//                 break;
//             }
//         }
//         if(c==m){
//             x=i;
//             int c1=1;
//             for(int k=i+1; k<m-1; k++){
//                 if(vn[k].substr(x) == vm[c1]){
//                     c1++;
//                 }
//                 else{
//                     break;
//                 }
//             }
//             if(c1==m){

//             }
//         }
//         // int pos = vn[i+c].find(vm[c]);
//         // if(pos != string::npos){
//         //     for(int j=0; j<m; j++){
//         //         int p = vn[i+c].find(vm[j]);
//         //         // cout << pos << "pos" << i << endl;
//         //         if(pos == p){
//         //             c++;
//         //         }
//         //         else{
//         //             break;
//         //         }
//         //     }
//         //     if(c==m){
//         //         // cout << a << " yes " << b << endl;
//         //         a = i+1;
//         //         b = pos+1;
//         //         break;
//         //     }
//         // }
//     }
//     cout << a+1 << " " << b+1 << endl;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n>> m;
    vector<string> vn(n),vm(m);
    for(int i=0; i<n; i++){
        cin >> vn[i];
    }
    for(int i=0; i<m; i++){
        cin >> vm[i];
    }
    for (int a=0; a<=n-m; a++) {
        for (int b=0; b<=n-m; b++) {
            bool x = true;
            for (int i=0; i<m; i++) {
                if (vn[a+i].substr(b,m)!=vm[i]) {
                    x = false;
                    break;
                }
            }
            if (x) {
                cout << (a + 1) << " " << (b + 1) << endl;
                return 0;
            }
        }
    }
    return 0;
}