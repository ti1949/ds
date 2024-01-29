#include<conio.h>
#include<iostream.h>
#include<process.h>
int c = 0;
class stack
{
        	int info, ele;
        	stack *node,*link,*top;
public:
        	stack()
        	{
        	  top=NULL;
        	}
        	void insert();
        	void del();
        	void dis();
};
 
void stack::insert()
{
 if(c==2)
	cout<<"stack is full";
 else
 {
        	node=new stack;
        	cout<<"\nEnter Info:";
        	cin>>ele;
        	node->info=ele;
        	node->link=NULL;
        	if(top==NULL)
        	{
                    	top=node;
        	}
        	else
        	{
                    	node->link=top;
                    	top=node;
        	}
        	c++;
 }
}
void stack::del()
{
        	if(top==NULL)
        	{
                    	cout<<"\n Underflow";
        	}
        	else
        	{
                    	cout<<"\nDeleted Element is :"<<top->info;
                    	top=top->link;
                    	c--;
        	}
}
 
void stack::dis()
{
        	stack *move;
        	move=top;
        	while(move!=NULL)
        	{
                    	cout<<"\t"<<move->info;
                    	move=move->link;
        	}
}
 
void main()
{
        	clrscr();
        	int ch;
        	stack s;
        	cout<<"\n1.Insert 2.Show 3.Delete 4.Exit";
        	while(ch!=4)
        	{
                    	cout<<"\nEnter Choice";
                    	cin>>ch;
                    	switch(ch)
                    	{
                                	case 1: s.insert(); break;
                                	case 2: s.dis(); break;
                                	case 3: s.del(); break;
                                	case 4:exit(0);
                    	}
        	}
getch();
}
