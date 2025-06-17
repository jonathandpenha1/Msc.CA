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

class computer
{
	public:
	computer()
	{
		cout<<"This is a computer"<<endl;
	}
};


class Linux:public computer, public electronicdevice
{
	public:
	linux()
	{
		cout<<"This is linux based system"<<endl;
	}
};
class debian: public linux
{
	
};

void main()
{
	clrscr();
	debian o1;
	
	getch();
}