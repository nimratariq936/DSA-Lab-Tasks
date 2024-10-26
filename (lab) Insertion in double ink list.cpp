#include<iostream>
using namespace std;
int main(){
	struct node{
		int data;
		node *next;
		node *prev;
	};
	node *n1=new node();
	node *n2=new node();
	node *n3=new node();
	node *n4=new node();
	cout<<"node 1: ";
	cin>>n1->data;
	cout<<"node 2: ";
	cin>>n2->data;
	cout<<"node 3: ";
	cin>>n3->data;
	cout<<"node 4: ";
	cin>>n4->data;
	n1->prev=nullptr;
	n2->prev=n1;
	n3->prev=n2;
	n4->prev=n3;
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=nullptr;
	node *head=n1;
	cout<<"Traversing: "<<endl;
	node *curr;
	curr=head;
	while(curr!=NULL){
	    cout<<curr->data<<endl;
	    curr=curr->next;
	}
	cout<<endl;	
	//Insertion at start
	cout<<"\tInsertion at start "<<endl;
	node *nn1=new node();
	cout<<"Enter value u wanna insert at start: ";
	cin>>nn1->data;
	nn1->next=head;
	nn1->prev=nullptr;
	n1->prev=nn1;
	head=nn1;
	cout<<"After Insertion at start: "<<endl;
	node *current;
	current=head;
	while(current!=NULL){
		cout<<current->data<<endl;
		current=current->next;
	}
	
	//Insertion at end
	cout<<"\tInsertion at end "<<endl;
	node *i=head;
	while(i->next!=NULL){
		i=i->next;
	}
	node *nn2=new node();
	cout<<"Enter value u wanna insert at end: ";
	cin>>nn2->data;
	nn2->prev=i;
	nn2->next=nullptr;
	i->next=nn2;
	cout<<"After Insertion at end: "<<endl;
	node *n;
	n=head;
	while(n!=NULL){
		cout<<n->data<<endl;
		n=n->next;
	}	
	return 0;
} 