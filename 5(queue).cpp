#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class queue
{

   int a[10],front,rear,item,i;
   public:
   queue()
   {
   front=rear=0;
   }
   void insert();
   void del();
   void count();
   void display();
};
void queue::insert()
{
	if(rear >=3)
	{
	  cout<<"\nQueue is full";
	  return;
	}
	else
	{
	   cout<<"\n enter element";
	   cin>>item;
	   rear++;
	   a[rear] = item;
	}
	if(front==0)
	  front = 1;
}
void queue::del()
{
	if(front == 0)
	{
	  cout<<"\nQueue is empty";
	  return;
	}
	cout<<"\nDeleted item"<<a[front];

	if(front == rear)
	  front=rear = 0;
	else
	  front++;
}
void queue::count()
{
	int count=0;
	if(front==0)
	{
	  cout<<"\nQueue is empty";
	  cout<<"\n number of elment in queue"<<count;
	  return;
	}
	else
	{
	  for(i=front;i<=rear;i++)
	  {
	     count++;
	  }
	  cout<<"\n number of element in queue"<<count;
	}
}
void queue::display()
{
	int i;
	if(front==0)
	  cout<<"\nQueue is empty";
	else
	{
	cout<<"\n element in queue are:";
	for(i=front;i<=rear;i++)
	  {
	     cout<<a[i]<<"\t";
	  }
	}
}
void main()
{
	int item;
	int ch;
	queue q;
	clrscr();
	cout<<"\n\n\n1:insert 2:delete 3:Count 4:Display  5 :exit";
	do
	{
	 cout<<"\nEnter Menu number: ";
	 cin>>ch;
	 switch(ch)
	 {
		case 1: q.insert();
			break;
		case 2: q.del();
			break;
		case 3: q.count();
			break;
		case 4: q.display();
			break;
		case 5: exit(0);
	 }
	 }
	while(ch!=5);
	getch();
}
