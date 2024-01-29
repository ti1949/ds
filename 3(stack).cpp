#include <iostream>
#include <cstdlib> // for exit()
using namespace std;

class stack
{
	int s[10];
	int top, n, i, x;

public:
	stack();
	void push();
	void pop();
	void peep();
	void change();
	void count();
};

stack::stack()
{
	top = -1;
	n = 3;
}

void stack::push()
{
	if (top == n - 1)
    	cout << "\nStack overflow, cannot insert a new element.";
	else
	{
    	cout << "\nEnter a value to be pushed: ";
    	cin >> x;
    	top++;
    	s[top] = x;
	}
}

void stack::pop()
{
	if (top == -1)
    	cout << "\nStack underflow";
	else
	{
    	x = s[top];
    	top = top - 1;
    	cout << "\nPopped value from stack: " << x;
	}
}

void stack::peep()
{
	cout << "\nEnter the position: ";
	cin >> i;
	if ((top - i + 1) < 0)
	{
    	cout << "\nStack is underflow in peep";
    	cout << "\nInvalid position";
	}
	else
    	cout << "\nElement at position " << i << " is " << s[top - i + 1];
}

void stack::change()
{
	cout << "\nEnter the position: ";
	cin >> i;
	cout << "\nEnter the element: ";
	cin >> x;
	if ((top - i + 1) < 0)
	{
    	cout << "\nStack is underflow in change";
    	cout << "\nInvalid position";
	}
	s[top - i + 1] = x;
}

void stack::count()
{
	int count = 0;
	int i;
	if (top == -1)
	{
    	cout << "\nStack is empty";
    	cout << "\nNumber of elements in stack: " << count;
    	return;
	}
	for (i = 0; i <= top; i++)
    	count++;
	cout << "\nNumber of elements in stack: " << count;
}

int main()
{
	char choice;
	int ch;
	stack s;

	do
	{
    	cout << "\n1: Push 2: Pop 3: peep 4: count 5: Change 6: Exit";
    	cout << "\nEnter Menu number: ";
    	cin >> ch;
    	switch (ch)
    	{
    	case 1:
        	s.push();
        	break;
    	case 2:
        	s.pop();
        	break;
    	case 3:
        	s.peep();
        	break;
    	case 4:
        	s.count();
        	break;
    	case 5:
        	s.change();
        	break;
    	case 6:
        	exit(0);
    	}
	} while (ch != 6);

	return 0;
}
