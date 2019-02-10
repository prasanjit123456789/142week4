/*QUEUE USING STACK*/
#include<iostream>
#include"stack.cpp"
using namespace std;
//define Queue_stack class
class Queue_stack{
	//make public
	public:
	//define stack objects
	Stackll s1,s2;
	//define node type pointers
	Node* 	front;
	Node* end;
	//define constructor
	Queue_stack(){
		front=NULL;
		end=NULL;
	}
	//use enqueue function that implement the 
	void enqueue(int value){
		//first insert in the stack s1
		s1.push(value);
		//if it is the first element
		if(front==NULL){
			front=s1.top;
		}
		end=s1.top;	
	}
	void dequeue(){
		//find the last element
		int i=1;
		Node* current=s1.top;
		while(current->next!=NULL){
			i++;
			current=current->next;
		}
		//first insert into another stack
		//so enter into another stack and delete
		current=s1.top;
		int n=1;
		while(n<i){
			n++;
			current=current->next;
			s2.push(s1.pop());
		}
		//delete the last one
		s1.pop();
		//do the reverse
		n=1;
		current=s2.top;
		while(n<i){
			n++;
			current=current->next;
			s1.push(s2.pop());
		}
	}
	//size function that finds the size of the queue
	int size(){
		return s1.size();
	}
	//isEmpty function that finds wheather the queue is empty or not
	bool isEmpty(){
		return s1.isEmpty();
	}
	//display function that displays the elements of queue
	void display(){
		s1.display();
	}
};
//define main function
int main(){
	Queue_stack q;
	for(int i=1;i<10;i++){
		q.enqueue(i);
	}
	q.dequeue();
	q.display();
	return 0;
}
