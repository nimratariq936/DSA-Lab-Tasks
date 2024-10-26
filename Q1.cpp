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
	int max=arr[0];
	int min=arr[0];
	
	for(int i=0; i<n; i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	
	cout<<"Max value is "<<max<<endl;
	cout<<"Min value is "<<min<<endl;
	
	delete[] arr;
	
	return 0;
}