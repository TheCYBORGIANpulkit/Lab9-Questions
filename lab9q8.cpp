#include <iostream>
#include<cstring>
using namespace std;
 
int mystrlen(char mystr [])
	{
		int count =0;
		int i=0;
		while((((mystr)+i)!='\0'))
		{
			
				count++;
				i++;
			
		}
		return count;
	}

int main(){

	char mystr[10]; 
	cout<< "Please enter your name "<< endl;
	cin.getline(mystr, sizeof(mystr));
	cout << "The length of your string " << mystr <<" is "<< mystrlen(mystr) <<endl;
	return 0;
}
	
	
