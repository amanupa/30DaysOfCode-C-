#include <iostream>
using namespace std;

class Aman{
public:

	//calculating the fibonacci series using the array
	void fibonacciSeriesWithArray(int arr[],int n,int i){
		
		if(i<n){
			if(i==0){
				arr[i]=0;
				cout<<arr[i]<<endl;
				
			}
			if(i==1){
				arr[i]=1;
				cout<<arr[i]<<endl;
				
			}
			if(i>1){

				int x=arr[i-1]+arr[i-2];
				arr[i]=x;
				cout<<arr[i]<<endl;
	
			}
			return fibonacciSeriesWithArray(arr,n,i+1);


		}
	}


//calculating the fibonacci series withaout array
	void fibonacciSeries(int n,int i,int a,int b){
		
		if(i<n){
			if(i==0){
				cout<<0<<endl;
			}
			if(i==1){
				cout<<1<<endl;
			}
			if(i>1){
				int c=a+b;
				cout<<c<<endl;
				a=b;
				b=c;
			}
			return fibonacciSeries(n,i+1,a,b);
		}
		    

	
	}

	//both function have the same time complexity but the function with array storing a constant size array which occupy heigher space than the withaout array one
};

int main()
{
	Aman a;
	int arr[10];
	a.fibonacciSeriesWithArray(arr,10,0);
	a.fibonacciSeries(10,0,0,1);
	return 0;	
}
