#include<iostream.h>
#include<conio.h>
class insertion
{
  	int a[10];
  	int i,PTR,temp,k,n;
  	public:
  	void get();
  	void sort();
};
void insertion::get()
{
  	cout<<"\n\n\nenter the size";
  	cin>>n;
  	cout<<"\n enter elements";
  	for(i=0;i<n;i++)
  	{
              	cin>>a[i];
  	}
}
 
  	//insertion sorting
void insertion::sort()
{
  	for(i=1;i<=n-1;i++)
  	{
 
              	temp = a[i];
              	PTR = i -1;
              	while(temp < a[PTR] && PTR>=0)
              	{
                          	a[PTR+1] = a[PTR];
                          	PTR = PTR -1;
              	}
              	a[PTR+1] = temp;
 
  	}
  	cout<<"\n array elements after Insertion sort";
  	for(i=0;i<n;i++)
  	   cout<<a[i]<<"\t";
 
}
void main()
{
clrscr();
insertion i;
i.get();
i.sort();
getch();
}
