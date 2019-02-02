/*STACK USING LINKED LISTS*/
//define library
#include<iostream>
#include"linkedlist.cpp"
using namespace std;
//Stackll class
class Stackll{
	//make public
	public:
	//define objects
	Linkedlist l;
	//node address
	Node *top;
	//define constructor
	Stackll(){
		top=NULL;
	}
	//push function that inputs the stacks
	void push(int value){
		//if it is the first element
		if(top==NULL) l.insert(value);
		//other wise
		else l.insertAt(value,1);
		top=l.head;
	}
	//pop function that deletes the elements of the stack
	int pop(){
		//call by isEmpty function
		bool b=isEmpty();
		int c;
		//if the stack is empty
		if(b==1){
			cout<<"The stack is empty so returned value"<<endl;
			return c;
		}
		//other wise
		else{
			//save the data
			c=top->data;
			l.delethead();
			top=l.head;
			return c;
		}
	}
	//size function that defines the size of the stack
	int size(){
		return l.countItems();
	}
	//define isEmpty function
	bool isEmpty(){
		if(top==NULL) return 1;
		else return 0;
	}
	//display function
	void display(){
		l.display();
	}
};
//define main function
int main(){
	Stackll s;
	for(int i=1;i<10;i++){
		s.push(i);
	}
	s.pop();
	cout<<s.size()<<endl;
	s.display();
	return 0;
}
