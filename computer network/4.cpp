#include<bits/stdc++.h>
#define ll              long long int 
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

//Write a program to convert given decimal number to binary. Find the parity bit to make it Even parity & show even parity number.
//Also find the parity bit to make Odd parity & show odd parity number.

int convertToBinary(int n){
    int ans = 0;
    int p = 1;
    while(n>0){
        int last_bit = (n&1);
        ans += p*last_bit;

        p = p*10;
        n = n>>1;
    }
    return ans;
}

int countOnes(int n){
	int count=0;
	while(n!=0){
		n=n&(n-1);
		count++;
	}
	return count;
}
void display(vector<int>s){
	for(auto x:s){
		cout<<x;
	}
}

int main(){
	fastread();
	cout<<"enter number"<<endl;
	int n; cin>>n;
	int binary=convertToBinary(n);
	cout<<"binary form: "<<binary<<endl;
	int setBits=countOnes(n);

	vector<int>v;
	v.push_back(binary);

	if(setBits % 2 == 0){
		// Given no. is in even Parity
		int parity_bit = 0;
		cout << "The given number is in Even Parity" << endl;
		cout << "Even Parity bit is :" << parity_bit << endl;
		v.push_back(parity_bit);
		display(v);
		cout<<endl;
		v.pop_back();
		cout << "Odd Parity bit is :"<<~parity_bit << endl;
		v.push_back(~parity_bit);
		display(v);
		v.pop_back();
	}
	else{
    
	// Given no. is in odd Parity
		int parity_bit = 0;
		cout << "The given number is in Odd Parity" << endl;
		cout << "Even Parity bit is :" << parity_bit << endl;
		v.push_back(parity_bit);
		display(v);
		cout<<endl;
		v.pop_back();
		cout << "Odd Parity bit is :"<<~parity_bit << endl;
		v.push_back(~parity_bit);
		display(v);
		v.pop_back();
	}
	}
}



/*
//Write a program to convert given decimal number to binary. Find the parity bit to make it Even parity & show even parity number.
//Also find the parity bit to make Odd parity & show odd parity number.

#include <iostream>
#include <vector>
using namespace std;

vector<int> convert_dec_to_bin(int dec){
	vector<int> v;
	while(dec>0){
		v.push_back(dec % 2);
		dec = dec / 2;
	}
	
	// Reversing the vector
	int i=0, j=v.size()-1;
	while(i<j){
		int temp = v[i];
		v[i] = v[j];
		v[j] = temp;
		i++ ;
		j-- ;
	}
	return v;
}

void display(vector<int> v){
	for(int i=0; i<v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}
int main(){
	int decimal_num;
	cout << "Enter decimal number" << endl;
	cin >> decimal_num;
	vector<int> binary_num = convert_dec_to_bin(decimal_num);
	
	cout << "Binary Form of given decimal no. is :" << endl;
	for(int i=0; i<binary_num.size();i++){
		cout << binary_num[i] << " ";
	}
	cout << endl;
	
	//Counting number of 1s
	int count = 0;
	for(int i=0; i<binary_num.size();i++){
		if(binary_num[i] == 1) 
			count++;
	}
	if(count % 2 == 0){
		// Given no. is in even Parity
		int even_parity_bit = 0;
		int odd_parity_bit = 1;
		cout << "The given number is in Even Parity" << endl;
		cout << "Even Parity bit is :" << even_parity_bit << endl;
		binary_num.push_back(even_parity_bit);
		display(binary_num);
		binary_num.pop_back();
		cout << "Odd Parity bit is :"<<odd_parity_bit << endl;
		binary_num.push_back(odd_parity_bit);
		display(binary_num);
		binary_num.pop_back();
	}
	else{
		//Given no. is in Odd Parity
		int even_parity_bit = 1;
		int odd_parity_bit = 0;
		cout << "The given number is in Odd Parity" << endl;
		cout << "Even Parity bit is :" << even_parity_bit << endl;
		binary_num.push_back(even_parity_bit);
		display(binary_num);
		binary_num.pop_back();
		cout << "Odd Parity bit is :"<<odd_parity_bit << endl;
		binary_num.push_back(odd_parity_bit);
		display(binary_num);
		binary_num.pop_back();
	}
	return 0;
}
*/
