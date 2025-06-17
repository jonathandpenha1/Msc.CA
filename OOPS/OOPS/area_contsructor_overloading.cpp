#include<iostream.h>
#include<conio.h>

class area
{
	public:
	area(float r)
	{
		cout<<"Area of circle: "<<3.14*r*r<<endl;
	}
	area(int l, int b)
	{
		cout<<"Area of rectangle: "<<l*b<<endl;
	}
	area(double b, float h)
	{
		cout<<"Area of triangle: "<<(1/2)*b*h<<endl;
	}
};

void main()
{
	clrscr();
	area o1(2),o2(3,2),o3(12,12.24);
	getch();
}