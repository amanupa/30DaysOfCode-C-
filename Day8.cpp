#include <iostream>
using namespace std;

class Aman{
public:
	int calculateCount(int arr[], int n,int x,int i,int count);
};

int Aman::calculateCount(int arr[],int n,int x,int i,int count){

	if(i<n){
		if(arr[i]==x){
			//cout<<i<<endl;
			
			count=count+1;
			//cout<<count<<endl;
		}
		return calculateCount(arr,n,x,i+1,count);
		//cout<<count<<endl;

	}
	return count;
	
	
}
int main()
{
	Aman a;
	int arr[]={1,5,8,2,4,2,3,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=a.calculateCount(arr,n,2,0,0);
	cout<<x<<endl;
	
}