#include<iostream>
using namespace std;

class stack{
	
	private:
	int size;
	int *arr;
	int counter;
	
	public:
		
		stack(){
			size = 10;
			arr[size] = {0};
			counter = -1;
		}
		
		stack(int size){
			this->size = size;
			counter = -1;
		 arr = new int[this->size];
		}
		
		void display(){
			for(int i = 0; i <= counter; i++){
				cout << arr[i] << " ";
			}
			cout << endl;	
		}
		
		void push(int val){
			if(counter == size - 1){
				cout << "Cant Push " << val << "! Stack is Full" << endl;
				return;
			}
			counter++;
			arr[counter] = val;
			
		}
		
		int pop(){
			counter--;
			return arr[counter+1];
			
		}
};

int main12(){
	
//	cout << "Enter the limit of stack";
//	int size;
//	cin >> size;
//	stack s1(size);

//	stack s1;
	stack s1(10);
	 s1.push(1);
	 s1.push(2);
	 s1.push(3);
	 s1.display();
	 cout << s1.pop() << endl;
	 s1.display();
	 s1.push(4);
	 s1.push(5);
	 s1.push(6);
	 s1.push(7);
	 s1.push(8);
	 s1.push(9);
	 s1.push(10);
	 s1.push(11);
	 s1.push(12);
	 s1.push(13);
	 s1.display();

	
	
	
	return 0;
}
