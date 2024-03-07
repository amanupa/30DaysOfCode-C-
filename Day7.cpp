#include <iostream>
using namespace std;

class Aman{
public:
	int x=0;
	int y=0;
	void sum(int n, int i){
		if(i<=n){
			if(i%2==0){
				
				x=x+i;
			}else{
				
				y=y+i;			
			}
			sum(n,i+1);
			
		}
	
	}
	void printSum(){
		cout<<"sum of the even numbers in range is: "<<x<<endl;
		cout<<"sum of the odd numbers in range is: "<<y<<endl;
	}

};
int main()
{
	Aman a;
	a.sum(5,1);
	a.printSum();

	return 0;
}