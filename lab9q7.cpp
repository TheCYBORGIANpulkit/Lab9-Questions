#include <iostream>
using namespace std;
 
double* maximum(double *a, int n){
	cout<<"Please enter the size of your array: "<<endl;
	cin >> n;
	
	double arr[n-1];
	
	cout<< "please enter the elements you want to take in the array: "<<endl;
	for(int i=0;i < n;i++){
		cin>> arr[i];

		if(((*a)+i)==0){
			a=NULL;
		}
		else{
			for(int j=i;j<n;j++){
				if(arr[i]<arr[j])
				{
					*a=&arr[j];
				}
			}
		}
	}
	cout << *a <<endl;
}	
int main(){
	int n;
	double *x;
	cout<< "The maximum value in your array is "<< maximum(x,n)<<"."<<endl;
	return 0;
}
