/*
Fill Candies
Chef received N candies on his birthday. He wants to put these candies in some bags. 
A bag has K pockets and each pocket can hold at most M candies. Find the minimum number of bags Chef needs so that he can put every candy into a bag.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line containing three space-separated integers N,K,M.

Output Format
For each test case, print the minimum number of bags Chef needs so that he can put all the candies in one of the bags.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,m,k;
	cin>>t;
	while(t--){
	    cin>>n>>k>>m;
	    int a=m*k;
	    if(n%a==0){
	        cout<<n/a<<endl;
	    }else{
	        cout<<(n/a)+1<<endl;
	    }
	}

}
