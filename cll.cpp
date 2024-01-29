#include<iostream.h>
#include<conio.h>
#include<process.h>
class CLL
{
 int info ,item;
 CLL *link,*node,*first,*move,*temp,*pred;
 public:
 CLL()
 {
  first=NULL;
 }
 void insert_front();
 void insert_last();
 void del_front();
 void del_last();
 void count();
 void search();
 void display();

};
void CLL::insert_front()
{
   node=new CLL;
   cout<<"enter item";
   cin>>item;
   node->info=item;

   if(first==NULL)
   {
      first=node;
      first->link=first;
   }
   else
   {
    move=first;
    node->link=first;

    while(move->link !=first)
    {
      move=move->link;
    }
    move->link=node;

    first=node;
   }
}
void CLL:: insert_last()
{
   node=new CLL;
   cout<<"enter item";
   cin>>item;
   node->info=item;
   if(first==NULL)
   {
      first=node;
      first->link=first;
   }
   else
   {
    move=first;
    while(move->link !=first)
    {
      move=move->link;
    }
    move->link=node;
    node->link=first;
   }
}

void CLL::del_front()
{
 if(first==NULL)
 {
   cout<<"\n CLL is empty ";
   return;
 }
 if(first->link==first)
 {
   cout<<"\n deleted element is"<<first->info;
   first=NULL;
 }
 else
 {
   temp=first;
   move=first;
   cout<<"\n deleted element is"<<first->info;
   first=first->link;
   while(move->link!=temp)
   {
   move=move->link;																													link;
   }
   move->link=first;
 }
}
void CLL::del_last()
{

if(first==NULL)
 {
   cout<<"\n CLL is empty ";
   return;
 }
  if(first->link==first)
 {
   cout<<"\n deleted element is"<<first->info;
   first=NULL;
 }
 else
 {
 move=first;
 while(move->link!=first)
  {
   pred=move;
   move=move->link;
  }
  cout<<"\n del element is"<<move->info;
  pred->link=first;
}
}
void CLL::count()
{
  int c;
  if(first==NULL)
   {
      cout<<"\n CLL is empty";
   }
   else
   {
    move=first;
    c=1;
    while(move->link!=first)
    {
      c++;
      move=move->link;
    }
    cout<<"\n no of nodes in CLL" <<c;
}
}
void CLL::search()
{   int c,f=0;
   if(first==NULL)
   {
      cout<<"\n CLL is empty";
   }
   else
   {
    move=first;
    c=1;
    cout<<"\n enter item to be search";
    cin>>item;
    while(move->link!=first)
    {
     if(move->info==item)
     {
      f=1;
      cout<<"\nelement is found at location"<<c;
      return;
     }
     c++;
     move=move->link;
    }
    if(move->info==item)
    {
      f=1;
      cout<<"\nelement is found at location"<<c;
    }
    if(f==0)
      cout<<"element is not found";
   }
}
void CLL::display()
{
 if(first==NULL)
   {
      cout<<"\n CLL is empty";
   }
   else
   {
    move=first;

    while(move->link !=first)
    { cout<<move->info<<"\t";
      move=move->link;
    }
    cout<<move->info;
  }
}
void main()
{
clrscr();
CLL c;
int ch;
cout<<"\n 1: insert_front 2: insert_last 3:del_front 4:del_last 5:count 6:search   7:dispaly        8:exit";
do
{
  cout<<"\n enter choice";
  cin>>ch;
  switch(ch)
  {
    case 1: c.insert_front();
    break;
    case 2: c.insert_last();
    break;
    case 3: c.del_front();
    break;
    case 4: c.del_last();
    break;
    case 5: c.count();
    break;
    case 6: c.search();
    break;
    case 7: c.display();
    break;
    case 8: exit(0);
  }
}while(ch!=8);
getch();
}
