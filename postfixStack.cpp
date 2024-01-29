#include<iostream.h>
#include<ctype.h>
#include<stdio.h>
#include<conio.h>
class stack
{
int s[20],top;
public:
stack()
{
 top=-1;
}
void push(int );
int pop();
int evaluate(char c, int op1,int op2);
};
void stack::push(int x)
{
   if(top>=19)
     cout<<"\nstackis full";
   else
   {
     top=top+1;
     s[top]=x;
   }
}
int stack::pop()
{
  if(top==-1)
  {
    cout<<"\n stack is empty";
    return 1;
  }
  else
  {   int x;
      x=s[top];
      top=top-1;
      return(x);
  }
}
int stack::evaluate(char c,int op1,int op2)
{
  if(c=='+')
    return(op1+op2);
  if(c=='-')
     return(op1-op2);
  if(c=='*')
     return(op1*op2);
  if(c=='/')
    return(op1/op2);
  if(c=='%')
    return(op1%op2);
}
void main()
{
 stack d;
 char ch;
 clrscr();
 int op1,op2,val;
 cout<<"\n enter the expression (5+6)-->65+ in single digit";
 while((ch=getchar())!='\n')
 {
  if(isdigit(ch))
    d.push(ch-48);
  else
  {
   op2=d.pop();
   op1=d.pop();
   val=d.evaluate(ch,op1,op2);
   d.push(val);
  }
 }
 val=d.pop();
 cout<<"\n \n value of expression: "<<val;
 getch();
 }
