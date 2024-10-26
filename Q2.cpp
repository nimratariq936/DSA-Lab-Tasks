#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter number of elements: ";
	cin>>n;
	
	if(n<=0){
		cout<<"The number of elements must be greater than 0!"<<endl;
		return 0;
	}
	int *arr=new int[n];
	
	cout<<"Enter the elements: "<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int evencount=0, oddcount=0;
	for(int i=0; i<n; i++){
		if(arr[i]%2==0){
			evencount++;
		}else{
			oddcount++;
		}
	}
	
	cout<<"Number of even numbers are "<<evencount<<endl;
	cout<<"Number of odd numbers are "<<oddcount<<endl;
	
	delete[] arr;
	
	return 0;
}