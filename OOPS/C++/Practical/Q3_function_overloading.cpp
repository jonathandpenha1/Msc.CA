/*

 WAP to do addition of two integers, float and double numbers using function overloading
 date: 27th August 2024
 PRN:23030142005

 */
 
#include<iostream.h>
#include<conio.h>

class Addition
{
	public:
	int add(int a, int b)
	{
		return(a+b);
	}
	float add(float x, float y)
	{
		return(x+y);
	}
	double add(double p, double q)
	{
		return(p+q);
	}
	
};

	void main()
	{
		Addition obj;

		clrscr();
		cout<<obj.add(7,3)<<endl;
		cout<<obj.add(6.14,6.14)<<endl;
		cout<<obj.add(4.55555,4.5555)<<endl;
		
		getch();
	}
