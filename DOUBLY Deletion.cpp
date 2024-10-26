#include<iostream>
using namespace std;

class node
{
	public :
		node *prev;
		int data;
		node *next;
		
	node()
	{
		this->prev=nullptr;
		this->data=0;
		this->next=nullptr;
	}	
};

class doubly
{
	public :
		node *head;
		
	doubly()
	{
		head=nullptr;
	}
	
	void traverse()
	{
		node *k;
		k=head;
		
		while( k!=nullptr)
		{
			cout<<k->data<<endl;
			k=k->next;
		}
		
		cout<<endl;
	}	

    void addstart( int data )
    {
		node *temp=new node;
		temp->data=data;
	
		if( head==nullptr )
		{
			temp->next=nullptr;
			head=temp;
		}
		else
		{
			temp->next=head;
			temp->prev=nullptr;
			head->prev=temp;
			head=temp;
		}
	}
	
	void addmid( int data , int pos )
	{
		node *temp;
		temp=new node ;
		temp->data=data;
		temp->next=nullptr;
	
		if( head==nullptr )
		{
			head=temp;
		}
		else
		{
			node *kkk;
			while( kkk->data!=pos )
			{
				kkk=kkk->next;
			}
			temp->prev=kkk;
			temp->next=kkk->next;
			kkk->next->prev=temp;
			kkk->next=temp;
		}
	}

	void addend( int data )
	{
		node *temp;
		temp=new node ;
		temp->data=data;
		temp->next=nullptr;
	
		if( head==nullptr )
		{
			head=temp;
		}
		else
		{
			node *kk=head;
			while( kk->next!=nullptr )
			{
				kk=kk->next;
			}
			temp->prev=kk;
			kk->next=temp;
		}
	}
	
	void delstart(){
		if(head==nullptr){
			cout<<"List is empty cant del any node!"<<endl;
		}else{
			node *jh=head;
			head=jh->next;
			head->prev=nullptr;
			delete(jh);
		}
	}
	void delmid(int data){
		node *i=head;
		node *pre;
		while(i->data!=data){
			pre=i;
			i=i->next;
		}
		pre->next=i->next;
		i->next->prev=pre;
		delete(i);
	}
	
	void delend(){
		node *jh=head;
		while(jh->next!=nullptr){
			jh=jh->next;
		}
		jh->prev->next=nullptr;
		delete(jh);
	}
};

int main()
{
	doubly D;
	D.addstart(10);
	D.addend(1000);
	D.addmid(100,10);
	D.traverse();
	
	cout<<"After deletion at start: "<<endl;
	D.delstart();
	D.traverse();
	
	
	return 0;
}