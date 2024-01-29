
#include<iostream.h>
#include<conio.h>
class binary
{
  int a[20],i,key,n,mid,low,high,temp,j,s;
  public:
  void get();
  int search(int a[],int key,int low,int high);
};
void binary::get()
{
  cout<<"\n Enter the size of array";
  cin>>n;
  cout<<"\n enter the array element";
  for(i=0;i<n;i++)
    cin>>a[i];
  cout<<"\n -----------------------";
  cout<<"\n elements in array are:\n";
  for(i=0;i<n;i++)
    cout<<a[i]<<"\t";
  cout<<"\n-------------------------------";
  cout<<"\n enter the element to be search";
  cin>>key;
  low=0;high=n-1;
  s=search(a,key,low,high);
  if(s>=0)
  {
    cout<<"successful search ";
    cout<<"\n element is found at position "<<s+1;
  }
  else
  cout<<"\n unsuccessful search";
}

int binary::search(int a[],int key,int low ,int high )
{
    if(low>high)
      return -1;
    mid=(low+high)/2;
    if(key<a[mid])
    return ( search(a,key,low,mid-1));
    else if(key>a[mid])
    return ( search(a,key,mid+1,high));
    else
    return mid;

  }

void main()
{
 clrscr();
 binary b;
 b.get();
 getch();
}

