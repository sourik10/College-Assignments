/*
Problem Statement: WAP to generate even and odd parity bit and the code word of a decimal number in sender side. In the receiver side check whether the data will be accepted or not by taking decision from user whether the data is in even parity or odd, and whether user wants to check the result for error or no error.
*/
#include<bits/stdc++.h>
using namespace std;
void evenParity(int*ar,int ct,int size){
    if(ct%2){
        ar[size]=1;
    }
    else{
        ar[size]=0;
    }
    cout<<"even parity code: "<<endl;
    for(int i=0;i<=size;i++){
        cout<<ar[i];
    }
    cout<<endl;
}

void oddParity(int*ar,int ct,int size){
    if(ct%2){
        ar[size]=0;
    }
    else{
        ar[size]=1;
    }
    cout<<"odd parity code: "<<endl;
    for(int i=0;i<=size;i++){
        cout<<ar[i];
    }
    cout<<endl;
}

void oddParityError(int*ar,int ct,int size){
    if(ct%2){
        ar[size]=0;
    }
    else{
        ar[size]=1;
    }
    cout<<"Error code: "<<endl;
    if(ar[size]==1){
        ar[size]=0;
    }
    else ar[size]=1;
    for(int i=0;i<=size;i++){
        cout<<ar[i];
    }
    cout<<endl;
}

void evenParityError(int*ar,int ct,int size){
    if(ct%2){
        ar[size]=1;
    }
    else{
        ar[size]=0;
    }
    cout<<"Error code: "<<endl;
    if(ar[size]==1){
        ar[size]=0;
    }
    else ar[size]=1;
    for(int i=0;i<=size;i++){
        cout<<ar[i];
    }
    cout<<endl;
}

int main(){
   int dec;
   cout<<"enter a decimal number :";
   cin>>dec;
   int bin[20],ct=0,size=0,n[20];

   //decimal to binaryConversion
   for(int i=0;dec>0;i++){
       if(dec%2){
           ct+=1;
       }
       size+=1;
       bin[i]=dec%2;
       dec/=2;
   }
   for(int i=0;i<size;i++){
       n[i]=bin[size-i-1];
   }

    //printing binaryConversion
    for(int i=0;i<size;i++){
        cout<<n[i];
    }
    cout<<endl<<endl;

    oddParity(n,ct,size);
    evenParity(n,ct,size); //upto sender side 


    //receiver side
    int ch1,ch2;
    cout<<"1.Odd \n2.even"<<endl;
    cout<<"enter choice"<<endl;
    cin>>ch1;
    switch(ch1){
        case 1:cout<<"1.error code \n2.errorless code"<<endl;
                cout<<"enter choice"<<endl;
                cin>>ch2;
                switch(ch2){
                    case 1: oddParityError(n,ct,size);
                            cout<<"rejected"<<endl;
                            break;
                    case 2: oddParity(n,ct,size);
                            cout<<"Accepted"<<endl;
                            break;
                    default:cout<<"wrong input";
                            
                }
                break;
        case 2:cout<<"1.error code \n2.errorless code";
                cout<<"enter choice"<<endl;
                cin>>ch2;
                switch(ch2){
                    case 1: evenParityError(n,ct,size);
                            cout<<"rejected"<<endl;
                            break;
                    case 2: evenParity(n,ct,size);
                            cout<<"Accepted"<<endl;
                            break;
                    default:cout<<"wrong input"<<endl;
                            
                }
                break;
        default:cout<<"wrong choice"<<endl;
    }

}
