#include<iostream.h>
#include<conio.h>

class add
{
	public:
	add(int a, int b)
	{
		cout<<a+b<<endl;
	}
};

void main()
{
	clrscr();
	add o(2,10);
	getch();
}