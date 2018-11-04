#include <iostream>
using namespace std;

int countEven(int *x,int y){
	int count=0;
	for(int i=0; i<y;i++){	
		if((*(x)+i)%2==0){
			count=count+1;
		}
	}
	return count;
}

int main(){
	int n;
	cout<<"Please enter the size of your array: "<<endl;
	cin >> n;
	int arr[n-1];
	int *x=&arr[n-1];
	
	cout<< "please enter the elements you want to take in the array: "<<endl;
	for(int i=0;i<n;i++){
		cin>> arr[i];
	}
	cout<<" The no. of even integers in your array is "<< countEven(x,n) <<endl;
	return 0;
}
	 
