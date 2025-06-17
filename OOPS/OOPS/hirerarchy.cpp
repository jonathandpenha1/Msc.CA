#include<iostream.h>
#include<conio.h>


class animal
{
	public:
	void geta()
	{
		cout<<"this is animal "<<endl;
	}
};

class dog:public animal
{
	public:
	void getd()
	{
		cout<<"this is dog "<<endl;
	}	
};


class cat:public animal
{
	public:
	void getc()
	{
		cout<<"this is cat "<<endl;
	}	
	
};

void main()
{
	clrscr();
	dog d;
	cat c;
	
	d.geta();
	d.getd();
	c.geta();
	c.getc();
	getch();
}