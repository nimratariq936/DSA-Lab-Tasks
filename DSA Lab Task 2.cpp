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
	n1->data=10;
	n2->data=20;
	n3->data=30;
	n1->prev=n3;
	n2->prev=n1;
	n3->prev=n2;
	n1->next=n2;
	n2->next=n3;
	n3->next=n1;
	node *head=n1;
	node *temp;
	temp=head;
	cout<<"Traversing before insertion at start: "<<endl;
	do{
		cout<<temp->data<<endl;
		temp=temp->next;
	}while(temp!=head);
	cout<<endl;
	
	//Insertion at start
	node *nn1=new node();
	nn1->data=90;
	node *t=head;
	do{
		t=t->next;
	}while(t->next!=head);
	nn1->prev=t;
	nn1->next=head;
	head->prev=nn1;
	head=nn1;
	t->next=nn1;
	
	node *i=head;
	cout<<"Traversing after insertion at start: "<<endl;
	do{
		cout<<i->data<<endl;
		i=i->next;
	}while(i!=head);
	cout<<endl;
	
	//Insertion at mid
	int value;
	cout<<"Enter the value after which u wanna insert: ";
	cin>>value;
	if(value==head->prev->data){
        cout<<"Can't insert at start or end!"<<endl;
        return 0;
    }
	
	node *n=head;
    bool f=false;
    do{
    	if(n->data==value){
		f=true;
		break;	
		}
		n=n->next;
	}while(n!=head);
	
	if(f==true){
	node *t=head;
	while(t->data!=value){
		t=t->next;
	}
	node *nn1=new node();
	nn1->data=25;
	nn1->prev=t;
	nn1->next=t->next;
	t->next=nn1;
	}else{
	cout<<"Invalid value!"<<endl;
	return 0;
	}
	cout<<endl;
	
	node *m=head;
	cout<<"Traversing after insertion: "<<endl;
	do{
		cout<<m->data<<endl;
		m=m->next;
	}while(m!=head);
	cout<<endl;
	
	//Insertion at end
	node *nn2=new node();
	nn2->data=35;
	node *q=head;
	do{
		q=q->next;
	}while(q->next!=head);
	nn2->prev=q;
	nn2->next=head;
	head->prev=nn2;
	q->next=nn2;
	
	node *l=head;
	cout<<"Traversing after insertion at end: "<<endl;
	do{
		cout<<l->data<<endl;
		l=l->next;
	}while(l!=head);
	cout<<endl;
	
	return 0;
}