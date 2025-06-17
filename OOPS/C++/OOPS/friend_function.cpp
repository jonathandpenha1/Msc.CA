#include<iostream.h>
#include<conio.h>

class Box
{
	private:
	int length;
	public:
	Box():length(0){}
	friend int printLength(Box);
};

int printLength(Box b)
{
	b.length+=10;
	return b.length;
}

void main()
{
	clrscr();
	Box b;
	cout<<"Length: "<<printLength(b)<<endl;
	getch();
}