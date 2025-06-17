#include<iostream.h>
#include<conio.h>

inline int mean(int a, int b, int c)
{
	return (a+b+c)/3;
}
inline int median(int a, int b, int c)
{
	int arr[]={a,b,c};
	return (arr[(3+1)/2]);
}
inline int mode(int a, int b, int c)
{
	if(a==b||a==c)
		return a;
	if(b==c)
		return b;
	return -1;
}

void main()
{
	clrscr();
	cout<<"Mean: "<<mean(3,4,5)<<endl;
	cout<<"Median: "<<median(3,4,5)<<endl;
	cout<<"Mode: "<<mode(3,4,4)<<endl;
	getch();
}