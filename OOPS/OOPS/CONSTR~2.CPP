#include<iostream.h>
#include<conio.h>

class add
{
	public:
	add(int a, int b)
	{
		cout<<a+b<<endl;
	}
	add(float x, float y)
	{
		cout<<x+y<<endl;
	}
	add(double p, float q)
	{
		cout<<p+q<<endl;
	}
};

void main()
{
	clrscr();
	add o1(2,10),o2(2.50,2.50),o3(12,12.24);
	getch();
}