/*Stack using queue*/
//define library
#include<iostream>
using namespace std;
//define Stackarray class
class Stackarray{
	//make public
	public:
	//define an array of int type
	int array[1000];
	//the index of the top one of the stack
	int top;
	//define constructor
	Stackarray(){
		top=-1;
	}
	//push function that inserts the data
	void push(int value){
		if(top==999){
			cout<<"More values can't be inserted."<<endl;
		}
		else{
			//insert at the top
			top++;
			array[top]=value;
		}
	}
	//pop function that deletes the top of the stack
	void pop(){
		if(top==-1){
			cout<<"There is no element to delete."<<endl;
		}
		else{
			//decrease the value of the top by one
			top--;
		}
	}
	//size function that finds the size of the stack
	int size(){
		return top+1;
	} 
	//display function that displays the stack
	void display(){
		if(top==-1){cout<<"There is no element.";}
		else{
			for(int i=0;i<=top;i++){
				cout<<array[i]<<"->";
			}
		}
		cout<<endl;
	}
};
//define main function
int main(){
	//define object
	Stackarray s;
	for(int i=10;i<20;i++){
		s.push(i);
	}
	s.pop();
	s.display();
	return 0;
}
