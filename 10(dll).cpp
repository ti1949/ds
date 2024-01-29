#include<iostream.h>
#include<conio.h>
#include<process.h>
class DLL
 
{
  struct node
  {
   int info,item;
   node *left,*right;
  } *node1,*first , *move,*pred,*temp;
  public:
  DLL()
  {
   first=NULL;
  }
  void insert_front();
  void insert_last();
  void del_front();
  void del_last();
  int search();
  void count();
  void display();
};
void DLL::insert_front()
{
   int item;
   node * node1=new node;
 
   cout<<"\n enter item";
   cin>>item;
 
   node1->info=item;
   node1->left=NULL;
   node1->right=NULL;
 
   if(first==NULL)
   {
     first=node1;
     return;
   }
   else
   {
    node1->right=first;
    first->left=node1;
    first=node1;
    }
}
 
void DLL::insert_last()
{
 
   node * node1=new node;
   int item;
   cout<<"\n enter item";
   cin>>item;
 
   node1->info=item;
   node1->left=NULL;
   node1->right=NULL;
 
   if(first==NULL)
   {
     first=node1;
     return;
   }
   else
   {
    move=first;
    while(move->right !=NULL)
    {
     move=move->right;
    }
    move->right=node1;
    node1->left=move;
   }
}
void DLL::count()
{  int c=0;
   if(first==NULL)
  {
   cout<<"\n DLL is empty";
   return;
  }
  else
  {
    move=first;
    while(move!=NULL)
    {
     c++;
     move=move->right;
    }
    cout<<"\n no of elements in dLL are"<<c;
  }
}
void DLL::del_front()
{
  if(first==NULL)
  {
   cout<<"\n DLL is empty";
   return;
  }
  else
  {
   move=first;
   first=move->right;
   first->left=NULL;
   move->right=NULL;
   cout<<"\deleted element is"<<move->info;
  }
}
void DLL::del_last()
{
    if(first==NULL)
  {
   cout<<"\n DLL is empty";
   return;
  }
  else
  {
   move=first;
   while(move->right!=NULL)
   {
    pred=move;
    move=move->right;
   }
  pred->right=NULL;
  move->left=NULL;
  if(first==move)
  {
  first=NULL;
  }
  cout<<"\n del elelement is"<<move->info;
  }
}
void DLL::display()
{
 
  if(first==NULL)
  {
   cout<<"\n DLL is empty";
   return;
  }
  else
  {
    move=first;
    while(move!=NULL)
    {
     cout<<move->info<<"\t";
     move=move->right;
    }
  }
}
int DLL::search()
{
 int c=0,x;
 cout<<"\n enter the node";
 cin>>x;
 for(temp=first;temp!=NULL;temp=temp->right)
 {
   c++;
   if(temp->info==x)
      return c;
 }
 return -1;
}
 
void main()
{
  clrscr();
  DLL d;
  int ch;
  cout<<" 1: insert_front  2: insert_last  3:del_front  4:del_last  5: search 6:count 7:display  8:exit";
  do
  {
  cout<<"\n enter choice";
  cin>>ch;
  switch(ch)
  {
   case 1: d.insert_front();
   break;
   case 2: d.insert_last();
   break;
   case 3:d.del_front();
   break;
   case 4:d.del_last();
   break;
case 5:
int f;
f=d.search();
if(f>0)
  cout<<"\n element is found at "<<f;
else
  cout<<"\n element not found";
break;
   case 6:d.count();
   break;
   case 7:d.display();
   break;
   case 8:exit(0);
  }
  }while(ch!=8);
  getch();
}
