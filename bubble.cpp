#include<iostream.h>
#include<conio.h>
class bubble_sort
{
  int a[20],i,j,n,temp,test;
  public:
  void get();
  void sort();
  void put();
};
void bubble_sort::get()
{
  cout<<"\n Enter the size of array";
  cin>>n;
  cout<<"\n enter the array element";
  for(i=1;i<=n;i++)
    cin>>a[i];
  cout<<"\n -----------------------";
  cout<<"\n array elements before sort :\n";
  for(i=1;i<=n;i++)
    cout<<a[i]<<"\t";
}
void bubble_sort::sort()
{
  for(i=1;i<=n-1;i++)
  {
	test=0;
    for(j=1;j<=n-i;j++)
	{
  	if(a[j] > a[j+1])
  	{
  	temp=a[j];
  	a[j]=a[j+1];
  	a[j+1]=temp;
  	test=1;
  	}
	}
  }
  if (test==0)
	return ;
}
 
void bubble_sort::put()
{
cout<<"\n element after sorting";
for(i=1;i<=n;i++)
  cout<<a[i]<<"\t";
}
void main()
{
 clrscr();
 bubble_sort b;
 b.get();
 b.sort();
 b.put();
 getch();
}
