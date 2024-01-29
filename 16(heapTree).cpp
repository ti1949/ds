#include<iostream.h>
#include<process.h>
#include<conio.h>
class heaptree
{
        	int n,heap[20],i,parent,data,last;
public:
        	heaptree()
        	{
        	 last=-1;
        	}
        	void get()
        	{
                    	cout<<"\nEnter Range:";
        	cin>>n;
 
        	for(i=0;i<n;i++)
        	heap[i]=0;
        	}
 
void insertheap()
{
        	if(last>=n-1)
        	 cout<<"\n heap is full";
        	 else
        	 {
 
        	  cout<<"\nEnter the element:";
        	  cin>>data;
        	  last++;
        	  heap[last]=data;
        	  reheapup(last);
        	  }
}
void reheapup(int newindex)
{
        	 if(newindex!=0)
        	 {
        	   parent=(newindex-1)/2;
        	   if(heap[newindex]>=heap[parent])
        	     {
        	   	int temp;
        	   	temp=heap[newindex];
        	   	heap[newindex]=heap[parent];
        	   	heap[parent]=temp;
        	   	reheapup(parent);
        	     }
        	     else
        	      return;
        	 }
        	 return;
}
void display()
{
        	cout<<"\nHeap Tree:";
        	for(i=0;i<n;i++)
        	 cout<<heap[i]<<"\t";
}
};
void main()
{
        	clrscr();
 
        	int ch;
        	heaptree h;
        	h.get();
        	cout<<"\n 1:insert 2:display";
        	do
        	{
        	cout<<"\n enter choice";
        	cin>>ch;
        	switch(ch)
        	{
        	case 1: h.insertheap();break;
        	case 2: h.display();break;
        	case 3: exit(0);
        	}
        	}while(ch!=3);
        	getch();
}
