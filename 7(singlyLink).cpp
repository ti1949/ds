#include<iostream.h>
#include<conio.h>
#include<process.h>
class linklist
{
	struct node
	{
	  int info;
	  node *link;
	}*node1;
	int item,s,x,f,pos,c;
	struct node *SAVE,*FIRST,*PRED,*TEMP,*t;

public:
	void insert_front();
	void insert_last();
	void dis();
	void count();
	void del_front();
	void del_info();
	int  search();
	void reverse();
	linklist()
	{
	  FIRST=NULL;
	  f=0;
	}
};


void linklist::insert_front()
{
      cout<<"\nEnter the item:";
	cin>>item; 

	node *node1=new node;

	node1->link=NULL;
	node1->info=item;

	if(FIRST==NULL)  
		FIRST=node1;
	else
	{
	  node1->link=FIRST;
	  FIRST=node1;
	}
}

void linklist::insert_last()
{
   cout<<"\nEnter the item:";
   cin>>item;
   node *node1=new node;
   node1->link=NULL;
   node1->info=item;
   if(FIRST==NULL)
      FIRST=node1;
   else
   {
       SAVE=FIRST;
       while(SAVE->link!=NULL)
	  SAVE=SAVE->link;
       SAVE->link=node1;
   }
}

void linklist::count()
{
   int c=0;
   node *x;
   x=FIRST;
   if(x==NULL)
   {
       cout<<"\n LL is empty";
       return;
   }
   else
   {
     while(x!=NULL)
     {
       c++;
       x=x->link;
     }
   }
   cout<<"number of nodes are"<<c;
}

void linklist::dis()
{
   node *x;
   x=FIRST;
   if(x==NULL)
   {
       cout<<"\n LL is empty";
       return;
   }
   else
   {
     cout<<"\n Elements in LL are:";
     while(x!=NULL)
     {
       cout<<"\t"<<x->info;
       x=x->link;
     }
   }
}


void linklist::del_front()
{
   SAVE=FIRST;
   if(SAVE!=NULL)
   {
	SAVE=SAVE->link;
	cout<<"\nDeleted node is"<<FIRST->info;
	FIRST=SAVE;
   }
   else
	cout<<"\n List is empty:";
}
void linklist :: del_info()
{

   if(FIRST == NULL)
   {
      cout<<"list is empty";
      return;
   }
   cout<<"\n enter the node according to info";
   cin>>x;
   if(FIRST->info== x)
   {
     FIRST=FIRST->link;
     f=1;
   }
   SAVE=FIRST;
   while(SAVE!=NULL)
   {
     PRED = SAVE;
     SAVE=SAVE->link;
     if(SAVE->info==x)
     {
       f=1;
       PRED->link=SAVE->link;
     }
    }
   if(f==0)
    cout<<"\n element not found";
}

int linklist::search()
{
   int c=0;
   cout<<"\nEnter item";
   cin>>item;
   SAVE=FIRST;
   while(SAVE!=NULL)
   {
	c++;
	if(SAVE->info==item)
	{
	 return c;
	}
	SAVE=SAVE->link;
   }
   return -1;
}

void linklist ::reverse()
{
    node *temp;
    SAVE=FIRST;          
    temp=NULL;
    while(SAVE->link!=NULL)
    {
     temp=SAVE->link;
     SAVE->link=temp->link;
     temp->link=FIRST;
     FIRST=temp;
    }
    dis();
}
void main()
{
    clrscr();
    linklist n;
    int ch,f;
    cout<<"\n 1: insert_front 2.Inser_last 3.Display 4. Del_front 5.del_info 6.Search  7.reverse  8.count 9.Exit\n";
    do
    {
    cout<<"\nEnter choice";
    cin>>ch;
    switch(ch)
    {
	case 1 : n.insert_front();break;
	case 2: n.insert_last(); break;
	case 3: n.dis(); break;
	case 4: n.del_front(); break;
	case 5 :n.del_info();break;
	case 6: f=n.search();
	       if(f>0)
		cout<<"\nElement is found at position "<<f;
	       else
		cout<<"\nElement is not found"; break;
	case 7:n.reverse();break;
	case 8:n.count();break;
	case 9: exit(0);
     }
  }while(ch!=9);
getch();
}
