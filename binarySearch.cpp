#include<iostream.h>
#include<conio.h>
class binary
{
  int a[20],i,key,n,mid,low,high,temp,j;
  public:
  void get();
  void sort();
  void display();
  void search();
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

}
void binary::sort()
{

 for(i=0;i<n-1;i++)
  {
   for(j=0;j<=n-i;j++)
   {
     if(a[j]>a[j+1])
     {
       temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;
     }
   }
  }
}
void binary::search()
{
cout<<"\n-------------------------------";
  cout<<"\n enter the element to be search";
  cin>>key;
low=0;high=n-1;
  while(low<=high)
  {
    mid=(low+high)/2;
    if(a[mid]==key)
    {
    cout<<"successful search ";
    cout<<"\n element is found at position "<<mid+1;
    break;
    }
    else if(a[mid]<key)
    low=mid+1;
    else
    high=mid-1;
  }
  if(low>high)
  cout<<"\n unsuccessful search";
}

void binary::display()
{
 cout<<"\n array elemets are";
 for(i=0;i<n;i++)
 cout<<a[i]<<"\t";
}
void main()
{
 clrscr();
 binary b;
 b.get();
 cout<<"\n=============================";
 cout<<"\n array elements after sort";
 b.sort();
 b.display();
 b.search();
 getch();
}

