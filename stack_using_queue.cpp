/*STACK USING QUEUE*/
//define library
#include<iostream>
#include"queue.cpp"
using namespace std;
//define Stack_queue class
class Stack_queue{
	//make public
	public:
	//define queue object
	Queuell q;
	//define address variables
	Node* top;
	//define constructor
	Stack_queue(){
		top=NULL;
	}
	//push functon that inserts the nodes in the stack
	void push(int value){
		q.enqueue(value);
		top=q.end;
	}
	//pop function that deletes the the nodes of stack
	void pop(){
		//to delete the queue as a stack first delete and insert as like a circle
		int a=size();
		int i=1;
		Node* current;
		//by loop
		while(i<a){
			i++;
			current=q.front;
			//first insert the lowest one in the top
			q.enqueue(current->data);
			//delete that one
			q.dequeue();
		}
		//delete the first one forever
		q.dequeue();
	}
	//size function that finds the number of nodes
	int size(){
		return q.size();
	}
	//display function that displays the data of stack
	void display(){
		q.display();
	}
};
//define main function
int main(){
	//define class object
	Stack_queue s;
	for(int i=5;i<15;i++){
		s.push(i);
	}
	s.pop();
	s.display();
	return 0;
}
