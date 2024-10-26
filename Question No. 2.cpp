#include<iostream>
using namespace std;
void swap(int *a, int *b){
	int temporary=*a;
	*a=*b;
	*b=temporary;
}

int main(){
	int num1=10;
	int num2=20;
	cout<<"Before swap: "<<endl;
	cout<<"Num 1 is "<<num1<<endl;
	cout<<"Num 2 is "<<num2<<endl;
	
	swap(&num1, &num2);
	cout<<"After swap: "<<endl;
	cout<<"Num 1 is "<<num1<<endl;
	cout<<"Num 2 is "<<num2<<endl;	
	
	return 0;
}