#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int n)
	{
		this->data = n;
		this->next = nullptr;
	}
};

class Stack {
	Node* top;

public:
	Stack(){
    top = NULL;
  }

	void push(int data)
	{

		Node* temp = new Node(data);
		if (!temp) {
			cout << "\nStack Overflow";
		}
		temp->data = data;
		temp->next= top;
		top = temp;
	}
  
	bool isEmpty(){
		return top == NULL;
	}

	int peek(){
		if (!isEmpty())
			return top->data;
		else
			return -1;
	}


	void pop()
	{
		Node* temp;
		if (top == NULL) {
			cout << "\nStack Underflow" << endl;
			exit(1);
		}
    
		else {
			temp = top;
			top = top->next;
		}
	}


};

int main()
{
	Stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);

	cout<< st.peek() << endl;

	st.pop();
	st.pop();
	cout <<st.peek() << endl;

	return 0;
}
