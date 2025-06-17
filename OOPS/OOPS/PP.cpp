#include<iostream.h>
#include<conio.h>


class electronicdevice
{
	public:
	electronicdevice()
	{
		cout<<"I am an electronicdevice "<<endl;
	}
};

class computer:public electronicdevice
{
	public:
	computer()
	{
		
	}
};


class Linux:public computer
{
	public:
	linux()
	{
		cout<<"This is linux based system"<<endl;
	}
};

void main()
{
	clrscr();
	Linux o1;
	
	o1.linux();
	getch();
}