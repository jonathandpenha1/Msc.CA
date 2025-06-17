#include<iostream.h>
#include<conio.h>

inline int cube(int s)
{
	return s*s*s;
}
inline int square(int r)
{
	return r*r;
}

void main()
{
	clrscr();
	cout<<"The cube of 3 is: "<<endl;
	cout<<"Square of a given number is: "<<square(5)<<endl;
	getch();
}