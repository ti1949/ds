 #include<iostream.h>
 #include<conio.h>
int  parent[10];
 class kruskal
 {
  int  mincost;
  int i,j,min ,k,n,ne,cost[10][10],a,b,u,v;
  public:
  void get();
  kruskal()
  {
  ne=1;
  mincost=0;
  }
  int find(int);
  int uni(int,int);
 };
 int kruskal::find(int i)
 {
  while(parent[i])
  i=parent[i];
  return i;
 }
 int kruskal::uni(int i ,int j)
 {

 if(i != j)
 {
 parent[j]=i;
 return 1;
 }
 return 0;
 }
 void kruskal::get()
 {
 cout<<"\n enter no of vertices";
 cin>>n;
 cout<<"\n enter cost matrix";
 for (i=1;i<=n;i++)
 {
 for(j=1;j<=n;j++)
 {
 cin>>cost[i][j];
 if(cost[i][j]==0)
  cost[i][j]=999;
 }}
	cout<<"\nThe edges of Minimum Cost Spanning Tree are\n\n";
	while(ne<n)
	{
		for(i=1,min=999;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(cost[i][j]<min)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
			}
		}
		u=find(u);
		v=find(v);
		if(uni(u,v))
		{
			cout<<"\n"<<ne++<<" edge ("<<a<<","<<b<<") ="<<min<<"\n";
			mincost +=min;
		}
		cost[a][b]=cost[b][a]=999;
	}
	cout<<"\n\tMinimum cost = "<<mincost<<"\n";
 }                          
 void main()
 {
 clrscr();
 kruskal k;
 k.get();
 getch();
 }
