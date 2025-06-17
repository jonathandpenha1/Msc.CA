#include<iostream.h>
#include<conio.h>

class test
{
	int num;
	public:
	test()
	{
		cout<<"Enter a number:"<<endl;
		cin>>num;
	}

	void operator++()
	{
		num =num+2;
	}
	void print()
	{
		cout<<"++ Operator: "<< num<<endl;
	}
	
};

class test2
{
	int num;
	public:
	test2()
	{
		cout<<"Enter a number:"<<endl;
		cin>>num;
	}
	
		void operator--()
	{
		num =num-2;
	}
	void print()
	{
		cout<<"-- Operator: "<< num<<endl;
	}
};

void main()
{
	clrscr();
	test t;
	test2 t2;
	++t;
	t.print();
	--t2;
	t2.print();
	getch();
}