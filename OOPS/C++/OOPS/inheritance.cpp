#include<iostream.h>
#include<conio.h>

class person
{
	int id;
	char name[20];
	public:
	void getp()
	{
		cout<<"Enter person details:"<<endl;
		cin>>id>>name;
	}
	public:
	void setp()
	{
		cout<<id<<" "<<name<<" "<<endl;
	}
};

class student:private person
{
	int marks;
	public:
	void gets()
	{
		cout<<"Enter marks: "<<endl;
		cin>>marks;
	}
	void sets()
	{
		setp();
		cout<<marks;
	}
};

void main()
{
	clrscr();
	student o1;
	
	o1.gets();
	o1.sets();
	getch();
}