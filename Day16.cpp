/*
Primality Test
Alice and Bob are meeting after a long time. As usual they love to play some math games. This times Alice takes the call and decides the game. The game is very simple, Alice says out an integer and Bob has to say whether the number is prime or not. Bob as usual knows the logic but since Alice doesn't give Bob much time to think, so Bob decides to write a computer program.

Help Bob accomplish this task by writing a computer program which will calculate whether the number is prime or not.

Note that 1 is not a prime number.

Input
The first line of the input contains an integer T, the number of testcases. T lines follow.

Each of the next T lines contains an integer N which has to be tested for primality.

Output

For each test case output in a separate line, "yes" if the number is prime else "no."

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x;

	cin>>t;
	while(t--){
	    int c=0;
	    cin>>x;
	    for(int i=1;i<=x;i++){
	        if(x%i==0){
	            c=c+1;
	        }
	    }
	    if(c==2){
	        cout<<"yes"<<endl;
	    }else{
	        cout<<"no"<<endl;
	    }
	}

}