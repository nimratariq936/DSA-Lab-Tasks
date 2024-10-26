#include<iostream>
using namespace std;
int main(){
	struct node{
		int data;
		node *next;
	};
	node *n1=new node();
	node *n2=new node();
	node *n3=new node();
	node *n4=new node();
	node *n5=new node();
	n1->data=10;
	n2->data=20;
	n3->data=30;
	n4->data=40;
	n5->data=50;
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=n1;
	node *head=n1;
	node *temp;
	temp=head;
	cout<<"Traversing before deletion at start: "<<endl;
	do{
		cout<<temp->data<<endl;
		temp=temp->next;
	}while(temp!=head);
	cout<<endl;
	
	//Deletion at start
	node *t;
	t=head;
	do{
		t=t->next;
	}while(t->next!=head);
	head=head->next;
	delete(t->next);
	t->next=head;
	
	node *i;
	i=head;
	cout<<"Traversing after deletion at start: "<<endl;
	do{
		cout<<i->data<<endl;
		i=i->next;
	}while(i!=head);
	cout<<endl;
	
	//Deletion at specific position
	int value;
	cout<<"Enter the value of node u wanna delete: ";
	cin>>value;
	node *p=head;
	do{
		p=p->next;
	}while(p->next!=head);
	if(value==head->data || value==p->data){
        cout<<"Can't delete at start or end!"<<endl;
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
	node *pre=nullptr;
	node *q;
	q=head;
	do{
		pre=q;
		q=q->next;
	}while(q->data!=value);
	pre->next=q->next;
	delete(q);
	}else{
	cout<<"Invalid value!"<<endl;
	return 0;
	}
	cout<<endl;
	
	node *m;
	m=head;
	cout<<"Traversing after deletion: "<<endl;
	do{
		cout<<m->data<<endl;
		m=m->next;
	}while(m!=head);
	cout<<endl;
	
	//Deletion at end
	node *s;
	s=head;
	node *pre=nullptr;
	do{
		pre=s;
		s=s->next;
	}while(s->next!=head);
	pre->next=head;
	delete(s);
	
	node *l;
	l=head;
	cout<<"Traversing after deletion at end: "<<endl;
	do{
		cout<<l->data<<endl;
		l=l->next;
	}while(l!=head);
	cout<<endl;
	
	return 0;
}