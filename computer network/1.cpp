#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
    fastread();
    
    // Program 1- Code to find a data is given in Even Parity or Odd Parity
    string code; cin>>code;
    int ct=0;
    for(int i=0;i<code.length();i++){
        if(code[i]=='1'){
            ct++;
        }
    }
    if(ct%2){
        cout<<"code is in odd parity"<<endl;
    }
    else cout<<"code is in even parity"<<endl;

}
