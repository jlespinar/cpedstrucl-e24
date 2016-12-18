#include <iostream>
using namespace std;

class LinkedList{
    struct Node {
        int x ;
        Node *next; 
    };

public:
    LinkedList(){
        head = NULL; // set head to NULL
    }
    void addValue(int val){
		Node *n = new Node();   
        n->x = val;             
        n->next = head;   
		           
        head = n;              
    }
    int popValue(){  
        Node *n = head;
		if(head==NULL)
		    {
		        cout<<"Empty";
		    }
        int ret = n->x;
        head = head->next;
        delete n;
        return ret;
    }
    void displayValue(){
	Node *n=head;
	cout<<"Number: ";
	while(n != NULL){
	        cout << n -> x <<" ";
	        n=n->next;
	} 
    }
private:
    Node *head; 
};
	void menu(){
		cout << "\n============================" << endl;
		cout << "What would you like to do?" << endl;;
		cout << "1: Insert into linked list" << endl;
		cout << "2: Pop" << endl;
		cout << "3: Exit" << endl;
		cout << "4. Display" << endl;
		cout << "============================" << endl;}
	
int main() {
	int choice, val;
    LinkedList list;
 	while (1){
	menu();
	cout << "\nChoice: ";
	cin >> choice;
		switch (choice)
	    {	case 1: {
	    		cout << "\nEnter a number: ";
	    		cin >>val;
	    		list.addValue(val);
				break;}   			
	    	case 2: {
	    		cout << "Number: " << list.popValue() << endl;
				break;}
	      	case 3:{
	      		 exit(1);
	      		 break;}
		case 4:{
			list.displayValue();
			break;	
		default: cout << "\nInvalid choice!\n";}
		}
	}
return 0;
}
