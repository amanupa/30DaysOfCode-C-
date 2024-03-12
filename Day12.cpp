
//Sasta Shark Tank
/*Devendra just had a million-dollar idea and he needs funds to startup. He was recently invited to Sasta Shark Tank (A TV show where entrepreneurs pitch their ideas to investors hoping to get investment in return).
He was offered deals from two investors. The first investor offers 
A dollars for10% of his company and the second investor offers 
B dollars for 20% of his company. Devendra will accept the offer from the investor whose valuation of the company is more. Determine which offer will Devendra accept or if both the offers are equally good.

Input Format
The first line contains a single integer 
T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers 
A and B - the amount offered by first investor for 10% of Devendra's company and the amount offered by second investor for 
20% of Devendra's company respectively.

Output Format
For each test case, Output FIRST if Devendra should accept the first investor's deal, output SECOND if he should accept the second investor's deal, otherwise output ANY if both deals are equally good.
You may print each character of the strings in uppercase or lowercase (for example, the strings "FiRst", "First", "FIRST", and "FIrst" will all be treated as identical).*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    int a=(x*100)/10;
	    int b=(y*100)/20;
	    
	    if(a>b){
	        cout<<"First"<<endl;
	    }else if(b>a){
	        cout<<"Second"<<endl;
	    }else{
	        cout<<"Any"<<endl;
	    }
	}

}