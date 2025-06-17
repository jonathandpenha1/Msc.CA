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
		cout<<obj.add(2,3)<<endl;
		cout<<obj.add(3.14,3.14)<<endl;
		cout<<obj.add(4.55555,6.5555)<<endl;
		
		getch();
	}