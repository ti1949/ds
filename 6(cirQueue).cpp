#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 3
class cqueue
{
	int arr[10], front,rear,item,i;
	public:
	cqueue()
	{
	front=rear=-1;
	//MAX=5; // size of circular queue
	}
	void add();
	void display();
	void del();
};

void cqueue::add()
{

	if( ((rear == MAX-1)&&(front==0))   || (rear + 1 == front)  )
	{
	   cout<<"\nQueue is full";
	   return;
	}
	if(rear == MAX-1)
	   rear = 0;
	else
	   rear++;

	cout<<"\nEnter item to be inserted";
	cin>>item;
	arr[rear] = item;

	if(front == -1)
	   front = 0;
}
void cqueue::del()
{
	if(front == -1)
	{
	   cout<<"\nQueue is empty";
	     return;
	}

	cout<<"\nDeleted item ="<<arr[front];
	arr[front] = 0;

	if(front == rear)
	   front=rear = -1;
	else
	{
	   if(front == MAX-1)
		front = 0;
	   else
		front++;
	}
}
void cqueue::display()
{

	int i;
	if(front==-1)
	    cout<<"\nQueue is empty";
	else
	{
	    for(i=0;i<=MAX-1;i++)
	      cout<<"\n"<<arr[i];
	}
}
void main()
{

	int menu,arr[MAX],i,ch;
	clrscr();
	cqueue c;
	//initialize data memebers of queue to zero
	for(i=0;i<MAX;i++)
	   arr[i] = 0;
	cout<<"\n 1. Add 2 delete  3 Dispaly 4 Exit";
	do
	{

		cout<<"\nEnter your choice";
		cin>>ch;
		switch(ch)
		{
			case 1:
				c.add();
				break;
			case 2: c.del();
				break;
			case 3: c.display();
				break;
			case 4: exit (0);
		}
	}
	while(ch!=4);
	getch();
}
