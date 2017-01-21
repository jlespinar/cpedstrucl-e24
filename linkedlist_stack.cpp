#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

class stack
{
    struct node *top;
    public:
    stack()
    {
        top=NULL;
    }
    void push(); 
    void pop();  
    void display(); 
};

void stack::push()
{
    int value;
    struct node *ptr;
    cout << "\nPush Operation";
    cout << "\nEnter a number to insert: ";
    cin >> value;
    ptr=new node;
    ptr->data=value;
    ptr->next=NULL;
    if(top!=NULL)
        ptr->next=top;
    top=ptr;
    cout<< "\nSuccessfully inserted!!!\n";

}

void stack::pop()
{
    struct node *temp;
    if(top==NULL)
    {
        cout<<"\nStack is empty!!!";
    }
    temp=top;
    top=top->next;
    cout<<"\nPOP Operation";
	cout <<"\nPop:" << temp->data;
    delete temp;
}


void stack::display()
{
    struct node *ptr1=top;
    cout << "\nStack: ";
    while(ptr1!=NULL)
    {
        cout<<ptr1->data<<" ";
        ptr1=ptr1->next;
    }
}

int main()
{
    stack sck;
    int choice;
    while(1)
    {
        cout <<"\n++++++++++++++++++++++++++++++++\n";
        cout <<"Linked List Operations\n";
	    cout <<"===============\n";
	    cout <<"1.Push\n";
	    cout <<"2.Pop\n";
	    cout <<"3.Display\n";
	    cout <<"4.Exit\n";
	    cout <<"===============\n";
	    cout <<"++++++++++++++++++++++++++++++++\n";
	    cout <<"Enter your choice:";
  		cin >> choice;
		  {
  			switch(choice){
  				case 1:
	                sck.push();
	                break;
	            case 2:
	                sck.pop();
	                break;
	            case 3:
	                sck.display();
	                break;
	            case 4:
	                return 0;
	                break;
	            default:
	                cout << "Error! Enter correct choice between 1-4!!";
	                break;
			  }
		
    	}
    	
    }
    return 0;
