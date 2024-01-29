#include<iostream.h>
#include<conio.h>
int n;
class single
{
	int v,cost[10][10],i,j,s[10],e[10],near1[10],t[10][3],m,minedge,k,l,mincost;
	int jindex;
	float dist[10];
public:
	void get();
	void prim();
	void display();
};

void single::get()
{
	m=1;
	minedge=9999;
	cout<<"\nEnter the no. of vertices\n";
	cin>>n;
	cout<<"\nEnter the Adjacenecy matrix\n";
	for(i=1;i<=n;i++)
	 for(j=1;j<=n;j++)
	 {
	   cin>>cost[i][j];
	   if(cost[i][j]==-1)
	    cost[i][j]=9999;
	   else
	    {
		e[m]=cost[i][j];
		if(e[m]<minedge)
		{
			minedge=e[i];
			k=i;
			l=j;
		}
	     }
	  }
}

void single::prim()
{
	t[1][1]=k;
	t[1][2]=l;
	mincost=cost[k][l];
	for(i=1;i<=n;i++)
	{
	  if(cost[i][l]<cost[i][k])
		near1[i]=l;
	  else
		near1[i]=k;
	}

	near1[k]=near1[l]=0;
	int minj=9999;
	for(i=2;i<=n-1;i++)
	{
		minj=9999;
		for(j=1;j<=n;j++)
		{
		  if(near1[j]!=0)
		  {
			if(cost[j][near1[j]]<minj)
			{
			 minj=cost[j][near1[j]];
			 jindex=j;
			}
		  }
		 }
	t[i][1]=jindex;
	t[i][2]=near1[jindex];
	mincost=mincost+cost[jindex][near1[jindex]];
	near1[jindex]=0;

	for(int k1=1;k1<=n;k1++)
	{
	  if(near1[k1]!=0 && cost[k1][near1[k1]]>cost[k1][jindex])
		near1[k1]=jindex;
	}
      }
cout<<"\n Mincost ="<<mincost;
}

void single::display()
{
	cout<<endl;
	cout<<"\nMinimum Spanning Tree Path as follow\n";
	cout<<t[1][1]<<"->"<<t[1][2];
	for(i=2;i<n;i++)
	{
		cout<<"->";
		cout<<t[i][1];
	}
}
void main()
{
	single d;
	clrscr();
	d.get();
	d.prim();
	d.display();
	getch();
}
