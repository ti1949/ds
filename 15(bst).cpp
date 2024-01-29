#include<iostream.h>
#include<conio.h>
#include<process.h>
class BST
{
 public:
 struct node
 {
  int data;
   node * left , *right;
 };
 struct node *root;
 BST()
 {
  root=NULL;
 }
 void insert( node **temp, node *r);
 void preorder(node *r);
 void postorder (node *r);
 void inorder(node *r);
 void largest(node *r);
 void smallest(node *r);
 void count(node *r,int &c);
 void search( node *r, int num);
};
void BST:: insert(node ** temp, node *r)
{
 if(*temp==NULL)
 {
  *temp=r;
  return;
 }
 else if(r->data < (*temp)->data)
 {
    insert(&((*temp)->left),r);
 }
 else
 {
     insert(&((*temp)->right),r);
 }
}
void BST::inorder(node *r) //LDR
{
 if(r!=NULL)
 {
  inorder(r->left);
  cout<< r->data<<"\t";
  inorder(r->right);
 }
 else
 return;
}
void BST::preorder(node *r) //DLR
{
 if(r!=NULL)
 {
  cout<< r->data<<"\t";
  preorder(r->left);
  preorder(r->right);
 }
 else
   return;
}
void BST::postorder(node *r) //LRD
{
 if(r!=NULL)
 {
  postorder(r->left);
  postorder(r->right);
  cout<< r->data<<"\t";
 }
 else
   return;
}
void BST::largest(node *r)
{
 while( r->right!=NULL)
   r= r->right;
 cout<<" largest node is "<<r->data;
 }
void BST::smallest(node *r)
{
 while( r->left!=NULL)
   r= r->left;
 cout<<" smallest node is "<<r->data;
 
}
void BST::count(node *r, int & c)
{
if(r!=NULL)
{
 count(r->left,c);
 count(r->right,c);
 c++;
}
}
void BST:: search(node *r, int num)
{
 if(r==NULL)
 {
  cout<<" node not foun";
  return;
 }
 else if(num<r->data)
 {
  search(r->left, num);
 }
 else if(num>r->data)
 {
  search(r->right,num);
  }
  else
  {
   cout<<"\n element found";
   return;
  }
}
 
void main()
{
 clrscr();
 BST b1,b2;
 node **temp;
 int ch,num;
 cout<<"\1:insert 2: preoder 3: post order 4: inorder 5:largest  6:smallest  7: count 8: search 9:exit";
 do
 {
  cout<<"\n enter choice";
  cin>>ch;
  switch (ch)
  {
   case 1: cout<<"\n enter node";
        	   cin>>num;
 
        	   temp=&(b2.root);
        	   node *r=new node;
        	   r->data=num;
        	   r->left=NULL;
        	   r->right=NULL;
        	   b2.insert(temp,r);
   break;
   case 2: b1=b2;
        	   b2.preorder(b1.root);
   break;
   case 3: b1=b2;
        	   b2.postorder(b1.root);
   break;
   case 4: b1=b2;
        	   b2.inorder(b1.root);
   break;
   case 5:b1=b2;
        	  b2.largest(b1.root);
   break;
   case 6:b1=b2;
        	  b2.smallest(b1.root);
   break;
  case 7: b1=b2;
  int c=0;
  b2.count(b1.root,c);
  cout<<"\n no of nodes"<<c;
  break;
  case 8:
  cout<<"\n enter node to be search";
  cin>>num;
  b1=b2;
  b2.search(b1.root,num);
  break;
    case 9:exit(0);
  }
  }while(ch!=9);
   getch();
}
