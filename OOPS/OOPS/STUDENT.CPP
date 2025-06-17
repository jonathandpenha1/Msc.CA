#include<iostream.h>
#include<conio.h>

class Student
{
	int rollno;
	char sname[20],addr[20];
	public:
	void get()
	{
		cout<<"Enter Student details"<<endl;
		cin>>rollno>>sname>>addr;
		cout<<"rollno"<<rollno<<" "<<"name"<<sname<<" "<<"addr"<<addr<<endl;

	}
};

	void main()
	{

		clrscr();
		int n,i;
		Student obj[100];
		cout<<"Enter the number of students:"<<endl;


		cin>>n;

		for(i=0;i<n;i++)
		{
			obj[i].get();
		}
		getch();
	}