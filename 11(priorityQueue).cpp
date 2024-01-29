#include<iostream.h>
#include<process.h>
#include<conio.h>
class priority_queue
{
  struct node
  {
    int info,priority;
    node *link;
  }
*node1,*first,*temp;
  public:
  void insert();
  void del();
  void display();
};
void priority_queue::insert()
{
 node *node1=new node;
 int item,p;

 cout<<"\n enter item";
 cin>>item;
 cout<<"\n enter priority";
 cin>>p;

 node1->info=item;
 node1->priority=p;
 node1->link=NULL;

 if(first==NULL || p<first->priority)
 {
   node1->link=first;
   first=node1;
 }
 else
 {
  temp=first;
  while(temp->link!=NULL && temp->link ->priority <=p)
  {
   temp=temp->link;
  }
  node1->link=temp->link;
  temp->link=node1;
 }
}

void priority_queue:: del()
{
 if(first==NULL)
 {
  cout<<"\n priority queu is empty";
 }
 else
 {
 temp=first;
 cout<<"\n deleted element is"<<temp->info;
 first=first->link;
 }

}
void priority_queue::display()
{
if(first==NULL)
 cout<<"\n priority queue is empty";
 else
 {
  temp=first;
  cout<<"\n elements in priority queue are";
  while(temp!=NULL)
  {
    cout<<"\n"<<temp->priority<<"\t"<<temp->info;
    temp=temp->link;
  }

 }
}
void main()
{
 clrscr();
 priority_queue p;
 int ch;
 cout<<"1:insert 2: del 3: display 4: exit";
 do
 {
  cout<<"\n enter choice";
  cin>>ch;
  switch(ch)
  {
    case 1: p.insert();break;
    case 2:p.del();break;
    case 3:p.display();break;
    case 4:exit(0);
  }
 }while(ch!=4);
 getch();


}
