#include <iostream>
using namespace std;

class Aman{
	public:
		
		int findElementInArray(int arr[], int n, int element){
			if (n>=0){

				if(arr[n]==element){
					return n;
				}

				findElementInArray(arr,n-1,element);

			}

			
		}

		int binarySearch(int arr[], int start, int end, int element){
			if(start<=end){
				
				int mid=start+(end-start)/2;
			
				
				if(arr[mid]==element){
					return mid;

				}
				else if(arr[mid]<element){
					
					
				return	binarySearch(arr,mid+1,end,element);
				}else{
					return binarySearch(arr,start,mid-1,element);
				}

			}
			return -1;
		}
		

		
};

int main(){
	int arr[]={1,2,4,5,6,8,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int element=1;
	Aman a;
	cout<<"Element found at index: "<<a.findElementInArray(arr,4,5)<<endl;
	cout<<"Element found in binary search at index: "<<a.binarySearch(arr,0,n-1,9)<<endl;
}
