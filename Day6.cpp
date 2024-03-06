#include <iostream>
using namespace std;

class Aman{
public:
	//function declaration 
	void recursiveSort(int arr[], int n, int i);
	void sortTheArrayLogic(int arr[], int n, int i, int j);

};
//defining the function outside the class using scope resolution and the class name
void Aman::recursiveSort(int arr[], int n, int i){
	if(i<n){
		int j=0;
		j=i;
		sortTheArrayLogic(arr,n,i,j);
		recursiveSort(arr,n,i+1);

	}
}
// the logic part for sorting 
void Aman::sortTheArrayLogic(int arr[],int n, int i, int j){
	if(i<n){
		if(arr[j]>arr[i+1]){
			int x=arr[j];
			arr[j]=arr[i+1];
			arr[i+1]=x;
			
		}
		sortTheArrayLogic(arr,n,i+1,j);
	}

}
// defining the function to print the sorted array after all the operation
void printTheSortedArray(int arr[], int n, int i){
	if(i<n){
		cout<<arr[i]<<endl;
		printTheSortedArray(arr,n,i+1);
	}
}

int main(){
	Aman a;
	//declaration of the function to print the array also we can declare it in the class.
	void printTheSortedArray(int arr[],int n,int i);
	int arr[]={8,2,31,9,1,7,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	a.recursiveSort(arr,n-1,0);
	printTheSortedArray(arr,n,0);
}