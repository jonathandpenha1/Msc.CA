#include<iostream.h>
#include<conio.h>


class gp
{
	public:
	void getgp()
	{
		cout<<"this is grandparent "<<endl;
	}
};

class p:public gp
{
	
};


class child:public p
{
	
};

void main()
{
	clrscr();
	child o1;
	
	o1.getgp();
	getch();
}