#include<iostream.h>
#include<conio.h>

class test
{
	int num;
	public:
	test()
	{
	}
	test(int x)
	{
		num=x;
	}

	void operator+(test);
};

void test::operator+(test o1)
	{
		int m =num+o1.num;
		cout<<"Addition of two integers: "<<m<<endl;
	}
	
void main()
{
	test t1(5),t2(3);
	clrscr();
	t1+t2;
	getch();
}