#include<iostream.h>
#include<conio.h>
class adjmatrix
{
 int totalnode;
 char nodes[10];
 int adjmat[10][10];
 public:
 adjmatrix();
 void acceptedge();
 void print();
};
adjmatrix::adjmatrix()
{
 cout<<"How many nodes are there less than 10 ";
 cin>>totalnode;
 for(int i=0;i<totalnode;i++)
 {
  cout<<"Enter name of nodes"<<i<<" ";
  cin>>nodes[i];
 }
}
 
void adjmatrix::acceptedge()
{
 for(int i=0;i<totalnode;i++)
 {
   char ans;
   for(int j=0;j<totalnode;j++)
   {
 	cout<<"Is there an Edge between "<<nodes[i]<<" -->"<<nodes[j]<<"(Y/N)";
 	cin>>ans;
 	if(ans=='Y'||ans=='y')
        	adjmat[i][j]=1;
 	else
        	adjmat[i][j]=0;
   }
 }
}
void adjmatrix::print()
{
  cout<<" ";
  for(int i=0;i<totalnode;i++)
 	cout<<" " <<nodes[i];
  cout<<endl;
  for(i=0;i<totalnode;i++)
  {
 	cout<<nodes[i];
 	for(int j=0;j<totalnode;j++)
 	{
   	cout<<" "<<adjmat[i][j];
 	}
 	cout<<endl;
  }
}
void main()
{
clrscr();
adjmatrix adj;
adj.acceptedge();
adj.print();
getch();
}
 
