#include<iostream.h>
#include<string.h>
#include<conio.h>
char a,b,c;
char s[20];
int top,n,i;
char x;
class stack
{
 public:
 stack()
 {
  top=-1;
 }
 void push(char c);
 char pop();
};
void stack::push(char c)
{
 top=top+1;
 s[top]=c;
}
 
char stack ::pop()
{
 x=s[top];
 top=top-1;
 return x;
}
void main()
{
  stack d;
  char exp[20];
  cout<<"\n enter postfix expression";
  cin>>exp;
  for(i=0;i<strlen(exp);i++)
  {
   if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{')
   {
     d.push(exp[i]);
     continue;
   }
   else
   {
    switch(exp[i])
    {
     case ')': a=d.pop();
        	       if(a=='{' || a== '[');  //not balanced
     break;
     case '}': b=d.pop();    // not balanced
        	      if(b=='('|| b =='[');
     break;
     case ']': c=d.pop();
        	    if(c=='('|| c=='{');
     break;
    }
   }
  }
  if(top==-1)
    cout<<"\n expression having balanced parenthesis";
  else
    cout<<"\n expression is not having balanced parenthesis";
    getch();
}
 
