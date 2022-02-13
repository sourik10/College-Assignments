#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
    fastread();
    
    // Program 2- Code to find a data is given in Even Parity or Odd Parity ,to generate even parity bit
    string code; cin>>code;
    int ct=0;
    for(int i=0;i<code.length();i++){
        if(code[i]=='1'){
            ct++;
        }
    }
    string parityBit;
    if(ct%2){
        cout<<"code is in odd parity"<<endl;
        parityBit="1";
    }
    else {
        cout<<"code is in even parity"<<endl;
        parityBit="0"; 
    }
    cout<<"parity bit "<<parityBit<<endl;
    cout<<"new even parity number/code: "<<code+parityBit<<endl;

}
