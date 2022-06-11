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
#define  fo(i,n)  for(i=0;i<n;i++)
#define  deb(x)  cout<< #x << "=" << x <<endl;
#define  deb2(x,y)  cout<< #x <<"="<< x<<","<< #y << "=" <<y<<endl;
using namespace std;

#define N 100
int stack[N];
int peak = -1;

void push(int element) {

	if (peak == N - 1)cout << "Stack is Overflow" << endl;
	else {
		peak++;
		stack[peak] = element;
	}
}

void pop() {
	if (peak == -1)cout << "Stack is Underflow." << endl;
	else {
		peak--;
	}
}

void top()
{
	if (peak == -1)cout << "Stack is Empty." << endl;
	else {
		int top_item;
		top_item = stack[peak];
		cout << "Top element : " << top_item << endl;

	}
}

void display()
{
	if (peak == -1)cout << "Stack is Empty." << endl;
	else {
		for (int i = peak; i >= 0; i--) {
			cout << stack[i] << " ";
		}
	}
	cout << endl;
}

int main()
{
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



