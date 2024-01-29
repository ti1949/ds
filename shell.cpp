#include<iostream.h>
#include<conio.h>
class shell
{
        	int a[30],i,j,k,n ;
        	int inc[3];
        	int numinc,increment, span,y;
        	public:
        	shell();
        	void get();
        	void sort();
};
shell::shell()
{
        	 inc[0] = 5;
        	 inc[1] = 3;
        	 inc[2] = 1;
        	 numinc = 3;
}
void shell::get()
{
        	cout<<"\n enter size";
        	cin>>n;
        	cout<<"\nEnter elements of array";
        	for(i=0;i<n;i++)
        	{
                    	cin>>a[i];
        	}
 
}
 
        	//shell sorting
void shell::sort()
{
        	for(increment=0;increment<numinc;increment++)
        	{
                    	/*span is the size of the increment*/
                    	span = inc[increment];
                    	cout<<"\nspan"<<span;
                    	for(j=span;j<n;j++)
                    	{
                                	/*insert element arr[j] into its proper position within its subfile*/
                                	y = a[j];
                                	for(k = j-span; k>=0 && y<a[k]; k-=span)
                                            	a[k+span] = a[k];
                                	a[k+span] = y;
                    	}
                    	cout<<"\n array elements after  span"<<span<<"\n";
                                	for(i=0;i<n;i++)
        	{
        	        	cout<<a[i]<<"  ";
        	}
        	}
 
        	cout<<"\nSorted Array:\n";
        	for(i=0;i<n;i++)
        	{
                    	cout<<a[i]<<"  ";
        	}
}
void main()
{
clrscr();
shell s;
s.get();
s.sort();
getch();
}
