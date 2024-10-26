#include <iostream>
#include <string>
using namespace std;
struct Node{
    string item;
    Node* next;
};

class GroceryList{
private:
    Node* head; 
public:
    GroceryList(){
        head=nullptr;
    }

    void addItem(string newItem){
        Node* newNode=new Node();
        newNode->item=newItem;
        newNode->next=nullptr;
        if(head==nullptr){
            head=newNode; 
        }else{
            Node* temp=head;
            while(temp->next!=nullptr){
                temp=temp->next;
            }
            temp->next=newNode; 
        }
        cout<<newItem<<" added succesfully!"<<endl;
    }

    void removeItem(string removeItem){
        if(head==nullptr){
            cout<<"The list is empty!"<<endl;
            return;
        }
        if(head->item==removeItem){
            Node* temp=head;
            head=head->next;  
            delete temp;
            cout<<removeItem<<" removed succesfully!"<<endl;
            return;
        }

        Node* current=head;
        Node* previous=nullptr;
        while(current!=nullptr && current->item!=removeItem){
            previous=current;
            current=current->next;
        }
        if(current==nullptr){
            cout<<removeItem<<"not found in the list."<<endl;
        }else{
            previous->next=current->next;
            delete current;
            cout<<removeItem<<"removed from the grocery list."<<endl;
        }
    }

    void displayList(){
        if(head==nullptr){
            cout<<"The grocery list is empty."<<endl;
            return;
        }

        Node* temp=head;
        cout<<"Grocery List:"<<endl;
        while(temp!=nullptr){
            cout<<"- "<<temp->item<<endl;
            temp=temp->next;
        }
    }
};

int main(){
    GroceryList l;
    int option;
    string item;
    do{
        cout<<endl<<"1. Add an item"<<endl;
		cout<<"2. Remove an item"<<endl;
		cout<<"3. View all items"<<endl;
		cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>option;
        cin.ignore(); 
        switch(option){
            case 1:
                cout<<"Enter the item u want to add: ";
                getline(cin, item);
                l.addItem(item);
                break;
            case 2:
                cout<<"Enter the item u want to remove: ";
                getline(cin, item);
                l.removeItem(item);
                break;
            case 3:
                l.displayList();
                break;
            case 4:
                cout<<"Exiting the program."<<endl;
                break;
            default:
                cout<<"Invalid option! Please try again."<<endl;
        }
    }while(option!=4);

    return 0;
}
