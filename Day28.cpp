/*
Q:> Degree of Polynomial (codechef problem)

url_Link;>https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DPOLY
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	int x,n;
	int y=0;
	cin>>t;
	while(t--){
	   cin>>n;
	   for(int i=0;i<n;i++){
	       cin>>x;
	       if(i>i-1 && x!=0){
	           y=i;
	       }
	   }
	   cout<<y<<endl;
	}

}
