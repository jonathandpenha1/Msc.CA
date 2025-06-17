#include<iostream.h>
#include<conio.h>

int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
		
	}
}
void main()
{
	clrscr();
	int num;
	cout<<"Enter a  number: "<<endl;
	cin>>num;
	
	cout<<"Factorial: "<<fact(num)<<endl;
	getch();
}