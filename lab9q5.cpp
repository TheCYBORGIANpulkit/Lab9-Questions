#include<iostream>
using namespace std;

int main(){
	char s[10] = "abcde";
	char *cptr;
	for(int i=5;i>=0;i--){
		*cptr = s[i];
		cout<< *cptr;
	}
	cout<<endl;
	return 0;
}
