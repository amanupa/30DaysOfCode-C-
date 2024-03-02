#include <iostream>

using namespace std;
class Aman{
public:
	void printArrayElement(int arr[], int n){
		if(n<0){
			//cout<<"Enter the valid array"<<endl;
		}else{
			//int brr[n]=;
			cout<<arr[n]<<endl;
			printArrayElement(arr,n-1);

		}
	}
};
int main(){
	int arr[]={1,2,3,4,5};
	Aman a;
	a.printArrayElement(arr,4);

}