/*QUEUE USILNG LINKED LIST*/
//define library
#include<iostream>
#include"linkedlist.cpp"
using namespace std;
//define Queuell class
class Queuell{
	//make public
	public:
	Node *front;
	Node *end;
	//define object
	Linkedlist l;
	//constructor
	Queuell(){
		front=NULL;
		end=NULL;
	}
	//use enqueue function that inserts the value
	void enqueue(int value){
		l.insert(value);
		//address update
		front=l.head;
		end=l.tail;
	}
	//dequeue function that deletes the front
	void dequeue(){
		//if there is no element
		if(front==NULL) cout<<"There are no elements."<<endl;
		else l.delethead();
		front=l.head;
	}
	//size function that finds the size of the queue
	int size(){
		if(front==NULL) return 0;
		else return l.countItems();
	}
	//isEmpty function that say wheather the queue is empty or not
	bool isEmpty(){
		if(front==NULL) return 1;
		else return 0;
	}
	//display function that displays the queue
	void display(){
		l.display();
	}
};
//define main function
int main(){
	//define object
	Queuell q;
	for(int i=1;i<10;i++){
	q.enqueue(i);
	}
	q.dequeue();
	q.display();
	return 0;
}
