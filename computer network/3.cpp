#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main(){
    fastread();
    //Find out the parity of given Code, generate Odd parity bit and print new Odd parity number.
    //Lab Program 2.2 
    
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
        parityBit="0";
    }
    else {
        cout<<"code is in even parity"<<endl;
        parityBit="1"; 
    }
    cout<<"parity bit "<<parityBit<<endl;
    cout<<"new odd parity number/code: "<<code+parityBit<<endl;

}
