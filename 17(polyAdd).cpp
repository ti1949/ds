#include<iostream.h>
#include<conio.h>
class polyadd
{
 struct node
 {
  float coeff;
  int exp;
  node *link;
 }*p;
 public:
 polyadd()
 {
  p=NULL;
 }
 void poly_append(float c,int e);
 void display();
 void add(polyadd & l1, polyadd & l2);
};
void polyadd :: poly_append(float c,int e)
{
  node *temp ,
  *temp1;
  temp1=p;
  temp=new node;
  temp->coeff=c;
  temp->exp=e;
  temp->link=NULL;
  if(p==NULL)
  {
   p=temp;
  }
  else
  {
   while(temp1->link!=NULL)
      temp1=temp1->link;
   temp1->link=temp;
  }
}
void polyadd:: display()
{
 node *temp=p;
 int f=0;
 while(temp!=NULL)
 {
  if(f!=0)
  {
   if(temp->coeff>0)
     cout<<"+";
   else
    cout<<" ";
  }
  if(temp->exp!=0)
     cout<<temp->coeff<<"x^"<<temp->exp;
  else
     cout<<temp->coeff;
  temp=temp->link;
  f=1;
 }
}
void polyadd:: add(polyadd &l1,polyadd &l2)
{
 node *z;
 if(l1.p==NULL && l2.p==NULL)
  return;
 node *temp1,*temp2;
 temp1=l1.p;
 temp2=l2.p;
 while(temp1!=NULL && temp2!=NULL)
 {
  if(p==NULL)
  {
   p=new node;
   z=p;
  }
  else
  {
   z->link=new node;
   z=z->link;
  }
  if(temp1->exp < temp2->exp)
  {
   z->coeff=temp2->coeff;
   z->exp=temp2->exp;
   temp2=temp2->link;
  }
  else
  {
   if(temp1->exp>temp2->exp)
   {
   z->coeff=temp1->coeff;
   z->exp=temp1->exp;
   temp1=temp1->link;
   }
   else

   {
   if(temp1->exp==temp2->exp)
   {
    z->coeff=temp1->coeff+temp2->coeff;
   z->exp=temp1->exp;
   temp1=temp1->link;
   temp2=temp2->link;
   }
   }
  }
  }
  while(temp1!=NULL)
  {
    if(p==NULL)
    {
     p=new node;
     z=p;
    }
    else
    {
     z->link=new node;
     z=z->link;
    }
    z->coeff=temp1->coeff;
    z->exp=temp1->exp;
    temp1=temp1->link;
  }
  while(temp2!=NULL)
  {
    if(p==NULL)
    {
     p=new node;
     z=p;
    }
    else
    {
     z->link=new node;
     z=z->link;
    }
    z->coeff=temp2->coeff;
    z->exp=temp2->exp;
    temp2=temp2->link;
  }
  z=z->link;
}
void main()
{
    polyadd p1;
    p1.poly_append(3,5);
    p1.poly_append(1.5,4);
    p1.poly_append(2,3);
    p1.poly_append(5,0);
    cout<<"\n first polynomial is:";
    p1.display();

    polyadd p2;
    p2.poly_append(5,6);
    p2.poly_append(1,4);
    p2.poly_append(21,3);
    p2.poly_append(8,0);
    cout<<"\n second polynomial is:";
    p2.display();

    polyadd p3;
    p3.add(p1,p2);
    cout<<"\n add of poly p1 & p2 is ";
    p3.display();
    getch();
}
