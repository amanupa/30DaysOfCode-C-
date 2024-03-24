/*
Decrement OR Increment
Write a program to obtain a number N and increment its value by 1 if the number is divisible by 4 otherwise decrement its value by 1.

Input Format
First line will contain a number N.

Output Format
Output a single line, the new value of the number.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n=0;
	    cin>>n;
	    if(n%4==0){
	        cout<<n+1<<endl;
	    }else{
	        cout<<n-1<<endl;
	    }
	

}
