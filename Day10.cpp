// Write a C++ program to update every array element by multiplication of the next and previous values of a given array of integers.

#include <iostream>
using namespace std;

class Aman{
public:
	void updateElement(int arr[],int jrr[],int n){
		
		for (int i = 0; i <=n; i++)
		{
			if(i==0){
				jrr[i]=arr[i];
			}
			if(i==n){
				jrr[i]=arr[i]*arr[i-1];
			}else if(i>0){
				jrr[i]=arr[i+1]*arr[i-1];
			}
			
		}
	}
};
int main()
{
	Aman a;
	int arr[]={0,1,2,3,4,5,6};

	int n=sizeof(arr)/sizeof(arr[0]);
	
	int jrr[n];
	a.updateElement(arr,jrr,n-1);
	for (int i = 0; i <=n-1; ++i)
	{
		cout<<jrr[i]<<endl;
	}
	return 0;
}