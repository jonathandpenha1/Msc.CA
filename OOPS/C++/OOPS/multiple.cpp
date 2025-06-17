#include<iostream.h>
#include<conio.h>

class p1
{
	public:
	void getp1()
	{
		cout<<"this is parent 1"<<endl;
	}
};

class p2
{
	public:
	void getp2()
	{
		cout<<"this is parent 2 "<<endl;
	}
};

class child:public p1, public p2
{
	public:
	void getc()
	{
		cout<<"this is child"<<endl;
	}
};

void main()
{
	clrscr();
	child o1;
	
	o1.getp1();
	o1.getp2(); 
	o1.getc();
	getch();
}