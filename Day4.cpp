#include <iostream>

using namespace std;
class Aman{
public:
	int sum=0;
	int sumOfArrayElement(int arr[], int n){
		if(n<0){
			//cout<<"Enter the valid array"<<endl;
		}else{
			sum=sum+arr[n];
			sumOfArrayElement(arr,n-1);

		}
		return sum;
	}
};
int main(){
	int arr[]={1,2,3,4,5,8};
	Aman a;
	cout<<a.sumOfArrayElement(arr,5)<<endl;

}