/*
. Using the concept of recursion to calculate the sum of n natural numbers and the factorial of a posetive number.
. Using the concept of class and object to implement the object oriented programing (oop).
*/

#include <iostream>
using namespace std;

class Aman{

public://Access Modifier 

	int x=0;//creating a integer type variable x and the value of variable is 0.
	int y=1;

	//creating a function to calculate the sum of n natural numbers
	int sumOfnNaturalNumbers(int n){

		if(n>0){//the base condition for the recursion function 

			x=n+x;//every time updating the value and adding the numbers 

			n--;//Decrementing the value of n so that on every call of function it update the value of n 

			sumOfnNaturalNumbers(n);//calling the function for applying the concept of recursion

		}
		return x;//returning the sum value of n integer in our case the sum of numbers from 0 to 9
	}

	//function to calculate the factorial of a number.
	int factorialOfNumber(int n){

		if(n>0){// the base contdition of the recursive function.

			y=n*y;//the calculation part for determine the factorial of a number.

			n--;//decreasing the value of variable n so that on every call of the function it update the value and work perfectly till the base condition hit.

			factorialOfNumber(n);//calling the function to implement the concept of recursion.

		}
		return y;//returning the updated value
	}
};

int main(){
	Aman a;// creating a object a of the class Aman
	//int f=0;
	cout<<"The sum of given natural number is: "<<a.sumOfnNaturalNumbers(9)<<endl;
	//cout<<"Enter the NUmber to calulate its factorial "<<endl;
	//cin>>f; to take input by user 
	//cout<<"The factorial of a number"<<f<<" is: "<<a.factorialOfNumber(f)<<endl; to printing the factorial of anumber by user unput
	cout<<"The factorial of a number is: "<<a.factorialOfNumber(5)<<endl;

}