/*
Second Largest
Three numbers A, B and C are the inputs. Write a program to find second largest among them.

Input Format
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains three integers A, B and C.

Output Format
For each test case, display the second largest among A, B and C, in a new line.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if(a>b&&a<c){
	        cout<<a<<endl;
	    }else if(b>a&&b<c){
	        cout<<b<<endl;
	        
	    }else if(b<a&&b>c){
	        cout<<b<<endl;
	    }else if(a<b&&a>c){
	        cout<<a<<endl;
	    }
	    
	    else{
	        cout<<c<<endl;
	    }
	}

}
