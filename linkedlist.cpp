/*STACKS USING LINKED LIST*/
//library
#include<iostream>
using namespace std;
//create node 
class Node{
	//make public
	public:
	int data;
	Node* next;
	Node(){
		next=NULL;	
	}
};
//create linked list
class Linkedlist{
	//make public
	public:
	Node* head;
	Node* tail;
	//constructor
	Linkedlist(){
		head=NULL;
		tail=NULL;
	}
	//insert function that inserts the data
	void insert(int value){
		//create new node
		Node *temp=new Node;
		//insert data
		temp->data=value;
		//if head is null or not
		if(head==NULL){
		head=temp;
		}
		//other wise
		else{
			tail->next=temp;
		}
		//update tail
		tail=temp;
	}
	//insertAt function that inserts certain position
	void insertAt(int value,int pos){
		int a=countItems();
		//if it needs to insert at first position
		if(pos==1){
			Node *temp=new Node;
			//save the data
			temp->data=value;
			//update the addresses
			temp->next=head;
			head=temp;
		}
		else if(pos==0 || pos >a+1){
			cout<<"This position does not exist"<<endl;
		}
		else{
			Node *current=head;
			int i=1;
			while(pos-1>i){
				i++;
				current=current->next;
			}
			Node *temp=new Node;
			//update addresses
			temp->next=current->next;
			current->next=temp;
		}
	}
	//deleteAt function that deletes the elements of the linked list at a position
	void delethead(){
			Node* current=head;
			head=head->next;
			delete current;
		
	}
	//countItem function that counts the elements
	int countItems(){
		int i=1;
		Node* current=head;
		while(current!=tail){
			i++;
			current=current->next;
		}
		
		return i;
	}
	//the function that displays the datas
	void display(){
		Node* current=head;
		while(current!=NULL){
			cout<<current->data<<"->";
			current=current->next;
		}
		cout<<endl;
	}
};
//define main function.
/*int main(){
	Linkedlist l;//l.delethead();
	l.insert(5);l.insert(4);l.delethead();l.display();
	return 0;
}*/
