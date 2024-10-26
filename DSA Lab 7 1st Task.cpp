#include <iostream>
using namespace std;
const int MAX=3;
class PlateStack{
private:
    int stack[MAX];  
    int top;         
public:
    PlateStack(){
        top=-1;  
    }
    void push(int plate){
        if(top==MAX-1){
            cout<<"Stack is full!"<<endl;
        }else{
            top++;
            stack[top]=plate;
            cout<<"Plate "<<plate<<" added to the stack successfully!"<<endl;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Stack is empty! Can't remove any plates."<<endl;
        }else{
            cout<<"Plate "<<stack[top]<<" removed from the stack successfully!"<<endl;
            top--;
        }
    }
    void peek(){
        if(top== -1){
            cout<<"Stack is empty! No plate on top."<<endl;
        }else{
            cout<<"Plate "<<stack[top]<<" is on top of the stack."<<endl;
        }
    }
    bool isEmpty(){
        return (top==-1);
    }
    bool isFull(){
        return (top=MAX-1);
    }
};

int main(){
    PlateStack plates;
    int option, plate;
    do{
        cout<<endl<<"1) Add a plate"<<endl;
		cout<<"2) Remove the top plate"<<endl;
		cout<<"3) Check top plate"<<endl;
		cout<<"4) Exit"<<endl;
        cout<<"Choose any option: ";
        cin>>option;
        switch(option){
            case 1:
                cout<<"Enter the plate number to add: ";
                cin>>plate;
                plates.push(plate);
                break;
            case 2:
                plates.pop();
                break;
            case 3:
                plates.peek();
                break;
            case 4:
                cout<<"Exiting the program."<<endl;
                break;
            default:
                cout<<"Invalid option!"<<endl;
        }
    }while(option!=4);

    return 0;
}
