/*
Chef Fantasy 11
All of Chef's friends are playing fantasy cricket based upon the ODI World Cup, and Chef would like to join them.
For a certain cricket match, Chef has decided upon his team of 11 players. However, he hasn't yet decided who should be the captain and who should be the vice-captain.

He's narrowed his decision down to N players out of the 11, from which he'll choose one to be the captain and one to be the vice captain.
How many different choices does he have?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first and the only line of each testcase contains a single integer N, the number of players Chef is considering.

Output Format
For each test case, output on a new line the number of possible choices of captain and vice-captain.
*/
#include <bits/stdc++.h>
using namespace std;



int main() {
	int t,n;
	cin>>t;
	while(t--){
	    int y=1;
	    int z=1;
	    int x=0;
	    cin>>n;
	    
	    x=n-2;
	    for(int i=1;i<=n;i++){
	        y=y*i;
	    }
	    for(int j=1;j<=x;j++){
	        z=z*j;
	    }
	    cout<<y/z<<endl;
	    
	}

}