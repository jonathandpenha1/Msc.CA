#include<iostream.h>
#include<conio.h>

class base
{
	public:
	int x;
};
class c1: virtual public base
{
	public:
	int y;
};
class c2: virtual public base
{
	public:
	int z;
};
class derived: virtual public c1, virtual public c2
{
	public:
	int sum;
};

void main()
{
	clrscr();
	derived o1;
	o1.c1::x=5;
	o1.y=10;
	o1.z=15;
	o1.sum=o1.c1::x+o1.y+o1.z;
	cout<<"Sum: "<<o1.sum<<endl;
	getch();
}