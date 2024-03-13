/*
Mario and Bullet
Mario's bullet moves at 
X pixels per frame. He wishes to shoot a goomba standing Y pixels away from him. The goomba does not move.
Find the minimum time (in seconds) after which Mario should shoot the bullet, such that it hits the goomba after at least Z seconds from now.

Input Format
The first line of input will contain an integer T, the number of test cases. 
Then the test cases follow.
Each test case consists of a single line of input, containing three space-separated integers X,Y, and Z.

Output Format
For each test case, output in a single line the minimum time (in seconds) after which Mario should shoot the bullet, such that it hits the goomba after at least Z seconds from now.
*/

//code

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    
	    if((y/x)>=z){
	        cout<<0<<endl;
	    }else{
	        cout<<z-(y/x)<<endl;
	        
	    }
	}

}
