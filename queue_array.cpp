/*Queue using queue*/
//define library
#include<iostream>
using namespace std;
//define queuearray class
class Queuearray{
	//make public
	public:
	//define an array of int type
	int array[1000];
	//the index of the front one of the queue
	int front;int end;
	//define constructor
	Queuearray(){
		front=-1;
		end=-1;
	}
	//enqueue function that inserts the data
	void enqueue(int value){
		if(front==999){
			cout<<"More values can't be inserted."<<endl;
		}
		else{
			//insert at the front
			front++;
			array[front]=value;
			if(end==-1) end++;
		}
	}
	//dequeue function that deletes the front of the queue
	void dequeue(){
		if(front==-1){
			cout<<"There is no element to delete."<<endl;
		}
		else{
			//decrease the value of the front by one
			end++;
		}
	}
	//size function that finds the size of the queue
	int size(){
		return front-end+1;
	} 
	//display function that displays the queue
	void display(){
		if(front==-1){cout<<"There is no element.";}
		else{
			for(int i=end;i<=front;i++){
				cout<<array[i]<<"->";
			}
		}
		cout<<endl;
	}
};
//define main function
int main(){
	//define object
	Queuearray s;
	for(int i=10;i<20;i++){
		s.enqueue(i);
	}
	s.dequeue();
	s.display();
	return 0;
}
