/*
Dracula Eats
Eat, drink, and be scary

There are 
�
N spooky days left until Halloween.
Dracula dines at a mysterious restaurant that changes its spooky menu daily. He particularly enjoys what they serve on Tuesday.

Today is Monday, so he wishes to calculate how many times he can indulge in his favourite menu in the next 
�
N days (including today) before Halloween.

Note that Dracula follows the standard 
7
7-day calendar, with Tuesday immediately following Monday.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
The only line of each test case contains a single integer 
�
N, denoting the number of spooky days.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
	int t,n;
	int ans;
	cin>>t;
	while(t--){
	   cin>>n;
	  
	   
	   if((n-1)%7==0){
	       ans=(n-1)/7;
	      
	       
	   }else{
	       ans=(n-1)/7+1;
	      
	   }
	   cout<<ans<<endl;
	    
	}

}
