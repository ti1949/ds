#include<iostream.h>
#include<conio.h>

class linear{
    int a[20],i,n,key;
    public:
	void get();
	void search();
};

    void linear::get(){
	cout << "enter the size of array: ";
	cin >> n;

	cout << "enter the elements of array: ";
	for(i=0;i<n;i++){
	    cin >> a[i];
	}

	cout << "enter the element to search: ";
	cin >> key;
    }

    void linear::search(){
	for(i=0;i<n-1;i++){
	    if(key == a[i]){
		cout << "element found at "<< i+1 << " index";
		break;
	    }
	    if(i>n){
		cout << "element not found!";
	    }
	}
    }

    void main(){
	clrscr();
	linear l;
	l.get();
	l.search();
	getch();
    }
