#include <iostream>
using namespace std;

class Aman{
public:
	int x=0;

//the function for printing the pattern using the concept of loop	
	void printStarUsingLoop(int n){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
				cout<<"*";
			}
			cout<<endl;
		}
	}

// the function for printing the pattern using the concept of recursion

	void printStarUsingRecursion(int n){

		if(n>0){
// use this to print the pattern opposite to the above one, the final output will be look like (123454321)

			printstar(1,n);//calling the function to print the star
            cout<<endl;//ucing this to start the next line after completing the line 
			printStarUsingRecursion(n-1);	

 /*use this to print the below pattern as above (like loop) because it will print the pattern at the returning time
		printStarUsingRecursion(n-1);
			printstar(1,n);
			cout<<endl;*/
	}

 }

//this function is using to print the star by calling it in the above recursion function
 		void printstar(int y, int x){
				if (y<x){
					cout<<"*";
					printstar(y+1,x);
			}	
		}

};

//the main function 
int main(){
	Aman a;//creating a object of the class
	a.printStarUsingLoop(5);//by using the object of the class calling the loop function to print he pattern
	a.printStarUsingRecursion(5);//calling the main recursion function to print the pattern
}