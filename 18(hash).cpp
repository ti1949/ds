#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
 
 
class hash
{
        	long int givenkeys[5], list[100];
 
        	public:
                    	void accept();
                    	void modular_division();
                    	void digit_extraction();
                    	void fold_shift();
                    	void fold_boundary();
                    	void make_null();
                    	void print();
};
void hash::print()
{
        	for(int i=0;i<100;i++)
        	{
                    	if(list[i]!=0)
                                	cout<<"List ["<<i<<"] = "<<list[i]<<endl;
        	}
}
void hash:: accept()
{
        	make_null();
        	for(int i=0;i<5;i++)
        	{
                    	cout<<"Enter Key ";
                    	cin>>givenkeys[i];
        	}
}
void hash::make_null()
{
        	for(int i=0;i<100;i++)
        	{
                    	list[i]=0;
        	}
}
 
void hash::modular_division()
{
        	cout<<" Enter 4 Digit Keys \n";
        	accept();
        	for(int i=0;i<5;i++)
        	{
 
                    	if(list[(givenkeys[i]%100)+1]==0)  //list[13]==13
                                	list[(givenkeys[i]%100)+1]=givenkeys[i];
                    	else
                    	{
                                	int temp=(givenkeys[i]%100)+1;
                                	while(list[temp]!=0)
                                            	temp++;
                                	list[temp]=givenkeys[i];
                    	}
        	}
 
        	print();
}
 
void hash::digit_extraction()
{
        	cout<<"Enter 3 Digit Key "<<endl;  
        	accept();
        	int pos1,pos2;
        	cout<<"Enter 2 postions ";
        	cin>>pos1>>pos2;
        	for(int i=0;i<5;i++)
        	{
                    	int add=0;
                    	int d1=givenkeys[i]/100;    	
                    	int d2=(givenkeys[i]/10)%10;
                    	int d3=(givenkeys[i])%10;   	
 
                    	switch(pos1)
                    	{
                                	case 1: add=add+(d1*10);
                                            	break;
                                	case 2: add=add+(d2*10);
                                            	break;
                                	case 3: add=add+(d3*10);
                                            	break;
                    	}
                    	switch(pos2)
                    	{
                                	case 1: add=add+d1;
                                            	break;
                                	case 2: add=add+d2;
                                            	break;
        	                    	case 3: add=add+d3;
                                            	break;
                    	}
                    	if(list[add]==0)
                                	list[add]=givenkeys[i];
                    	else
                    	{
                                	int temp=add;
                                	while(list[temp]!=0)
                                	  temp++;
                                	list[temp]=givenkeys[i];
                    	}
 
        	}//end for loop
        	print();
}
void hash::fold_shift()
{
        	cout<<"Enter 4 Digit Value "<<endl; 
        	accept();
        	for(int i=0;i<5;i++)
        	{
                    	int p1,p2;
                    	p1=givenkeys[i]/100;
                    	p2=givenkeys[i]%100; 
 
                    	if(list[p1+p2]==0)
                                	list[p1+p2]=givenkeys[i];
                    	else
                    	{
                                	int temp=p1+p2;
                                	while(list[temp]!=0)
                                	  temp++;
                                	list[temp]=givenkeys[i];
                    	}
 
        	}
        	print();
}
void hash::fold_boundary()
{
        	make_null();
        	cout<<"Enter 4 Digit Keys "<<endl;  
        	accept();
        	for(int i=0;i<5;i++)
        	{
                    	int n1,n2;
                    	n1=givenkeys[i]/100; 
                    	n1=(n1%10)*10+(n1/10);
                    	n2=givenkeys[i]%100;
                    	n2=(n2%10)*10+(n2/10);
                    	if(list[n1+n2]==0)
                                	list[n1+n2]=givenkeys[i];
                    	else
                    	{
                                	int temp=n1+n2;
                                	while(list[temp]!=0)
                                	  temp++;
                                	list[temp]=givenkeys[i];
                    	}
 
        	}
        	print();
}
void main()
{
        	int menu;
        	hash h;
        	do
        	{
                    	clrscr();
                    	cout<<"1. Modular Divison"<<endl
                    	<<"2. Digit Extraction"<<endl
                    	<<"3. Fold Shift "<<endl
                    	<<"4. Fold Boundary"<<endl
                    	<<"5. Exit"<<endl
                    	<<" Enter Your Choice ";
                    	cin>>menu;
                    	switch(menu)
                    	{
 
                    	 case 1:
                                	h.modular_division();
                                	break;
 
                    	 case 2:
        	                    	h.digit_extraction();
                                	break;
                    	 case 3:
                                	h.fold_shift();
                                	break;
                    	 case 4:
                                	h.fold_boundary();
                                	break;
                    	 case 5:
                                	exit(0);
                    	 default:
                                	cout<<"Invalid Choice !"<<endl;
                    	}
                    	getche();
        	}while(1);
 
}
 
