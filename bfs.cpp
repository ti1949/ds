#include<iostream.h>
#include<conio.h>
class bfstraval
{
 int reach[20],a[20][20],q[20],n,i,j,f,r,index;
 public:
 bfstraval()
 {
  f=r=0;
  index=1;
 }
void get();
void bfs();
};
void bfstraval::get()
{
 cout<<"\nEnter number of vertices:";
 cin>>n;
 cout<<"\nEnter Adjacency matrix:";
 for(i=1;i<=n;i++)
 {
   for(j=1;j<=n;j++)
   {
	reach[i]=0;
	cin>>a[i][j];
   }
 }
}
void bfstraval::bfs()
{
 reach[1]=1;
 f++;
 r++;
 q[r]=index;
 cout<<"\nBFS is ";
 while(f<=r)
 {
  index=q[f];
  f++;
  cout<<index<<"\t";
  for(j=1;j<=n;j++)
  {
	if(a[index][j]==1 && reach[j]!=1)
	{
 	reach[j]=1;
 	r++;
 	q[r]=j;
	}
  }
 }
}
void main()
{
 clrscr();
 bfstraval b;
 b.get();
 b.bfs();
 getch();
}
