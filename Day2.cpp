#include <iostream>
using namespace std;

//a class of name aman
class Aman{

 //the acess modifier
public:
	int l=1;
	int y=1;

	//defining a function of name powerOfNum to calculate the power of given num.
	//it is accepting two variable the firstone n is the number and the second one is the denoting that how much power we want to calculate.

	int powerOfNum(int n, int m){

		if(m>0){//the base condition
			y=y*n;
			m--;
			powerOfNum(n,m);//calling the function itself for recursion operation till the function hit the base candition
		}
		return y;// returnnig the valu of integer after succesfully performing the recursion operation
	}

//it is function for the same operation but in this we are using the concept of loop
	int powerOfNumLoop(int n,int m){
		for(int i=0;i<m;i++){
			l=l*n;
		}
		return l;

	}
};//ending of class

int main(int argc, char const *argv[])
{
	Aman a;//creating a object of the class Aman

	/*
this below is for the user dependency by using this code we will calculate the power of any number on the user demand (user input)	
	int num=0;
	int power=0;
	cout<<"enter the number to calculate its power"<<endl;
	cin>>num;
	cout<<"Enter the power of the given number"<<endl;
	cin>>power;
	cout<<"the power of given no. is "<<a.powerOfNum(num,power)<<endl;*/

	cout<<"the power of number is: "<<a.powerOfNum(2,3)<<endl;
	cout<<"the power of number is: "<<a.powerOfNumLoop(5,5)<<endl;

	return 0;
}