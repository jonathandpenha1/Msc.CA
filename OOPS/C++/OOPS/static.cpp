#include<iostream.h>
#include<conio.h>

static class add
{
	public:
	static int a=5;
	static void f1()
	{
		cout<<"This is static class function"<<endl;
	}
};

void main()
{
	clrscr();
	cout<<"Static data member is"<<add::a;
	cout<<add::f1();
	getch();
}