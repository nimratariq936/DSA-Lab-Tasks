#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};
void print_data(Node *head){
	if(head==nullptr){
		cout<<"Empty Link List!"<<endl;
	}
	Node* ptr=head;
	while(ptr!=nullptr){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl;
}
Node *insert_at_end(Node *head,int newValue){
	Node *new_node=new Node();
	new_node->data=newValue;
	new_node->next=nullptr;
	if(head==nullptr){
		return new_node;
	}
	Node *temp=head;
	while(temp->next!=nullptr){
		temp=temp->next;
	}
	temp->next=new_node;
	return head;
}
int main(){
	Node node1, node2, node3, node4;
	cout<<"Enter value of Node 1: ";
	cin>>node1.data;
	node1.next=&node2;
	cout<<"Enter value of Node 2: ";
	cin>>node2.data;
	node2.next=&node3;
	cout<<"Enter value of Node 3: ";
	cin>>node3.data;
	node3.next=&node4;
	cout<<"Enter value of Node 4: ";
	cin>>node4.data;
	node4.next=nullptr;
	cout<<"Link list values: ";
	Node* head=&node1;
	print_data(head);
	
	int newValue;
	cout<<"Enter value of new Node u want to insert at end: ";
	cin>>newValue;
	head=insert_at_end(head, newValue);
	
	cout<<"After insertion: ";
	print_data(head);
}