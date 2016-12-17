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
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
    }
    
	void displayValue(){
			Node *temp;
			temp = head;
			while(head != NULL){
			Node *n = head;
			Node *x = temp;
			int ret = n->x;
			head = head->next;
			cout << ret;
	}
	}
    
     
private:
    Node *head; 
};

	void menu(){
    	cout << "\nWhat would you like to do?: \n";
		cout << "1: Insert into linked list \n";
		cout << "2: Pop \n";
		cout << "3: Exit \n";
		cout << "4. Display\n";
	}
	
int main() {
	int choice, val;
    LinkedList list;
  	
 	while (1){
	menu();
	cout << "Choice: ";
	cin >> choice;
		switch (choice)
	    {
	    	case 1: {
	    		cout << "Enter number: ";
	    		cin >>val;
	    		list.addValue(val);
				  break;
				}   			
	    	case 2: {
	    		cout << list.popValue();
				  break;
			}
	      case 3:{
	      		 exit(1);
	      		 default: break;
			  }
		    case 4:{
				list.displayValue();
				break;
			}

		}
		}
    return 0;

}
