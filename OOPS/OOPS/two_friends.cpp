#include<iostream.h>
#include<conio.h>

class B;
class A
{
	int x;
	public:
	void setdata(int i)
	{
		x=i;
	}
	friend void min(A,B);
};

class B
{
	
};

void main()
{
	clrscr();
	
	getch();
}