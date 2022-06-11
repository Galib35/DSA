/*
          Number of element to push: 5
          1 2 3 4 5
          Press 1: Push.
          Press 2: Pop.
          Press 3: top.
          Press 4: Display.
          Press 0: Exit.


*/


#include<iostream>
using namespace std;

class StackNode {
public:
	int data;
	StackNode* next;
};

StackNode* root = new StackNode();



void push(int element) {
	StackNode* newnode = new StackNode();
	newnode->data = element;
	//newnode->next = NULL;

	newnode->next = root;
	root = newnode;

}

void pop() {
	if (root == NULL)cout << "Underflow." << endl;
	else {
		root = root->next;
	}
}

void top()
{
	if (root == NULL)cout << "Stack is Empty." << endl;
	else {
		cout << "Top element is: " << root->data << endl;
	}
}

void display()
{
	StackNode* temp = root;
	if (root == NULL)cout << "Stack is Empty." << endl;
	else {
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}

		cout << endl;
	}
}

int main()
{
	root = NULL;

	int n;
	cout << "Number of element to push: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		push(x);
	}





	int choice;
	do {

		cout << "Press 1: Push." << endl;
		cout << "Press 2: Pop." << endl;
		cout << "Press 3: top." << endl;
		cout << "Press 4: Display." << endl;
		cout << "Press 0: Exit." << endl;


		cin >> choice;

		switch (choice) {
		case 1: {
			int element;
			cout << "Enter element to push: ";
			cin >> element;
			push(element);
			break;
		}
		case 2:
		{
			pop();
			break;
		}
		case 3:
		{
			top();
			break;
		}
		case 4:
		{
			display();
			break;
		}
		case 0:
		{
			return 0;
		}
		default:
		{
			cout << "Press Another Number." << endl;
		}


		}

		cout << "-----------------------------" << endl << endl;
	}

	while (choice != 0);



}
