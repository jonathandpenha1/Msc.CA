#include<iostream.h>
#include<conio.h>
#include<string.h>

class str
{
	public:
	char s1[20];
	str(char x[])
	{
		strcpy(s1,x);
	}
	str();


	int operator==(str o1)
	{
		if(strcmp(s1, o1.s1)==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
		
};
void main()
{
	str s1("hello"),s2("hello");
	clrscr();
	int y=(s1==s2);
	if(y==1)
	{
		cout<<"Strings are equal"<<endl;
	}
	else
	{
		cout<<"Strings are not equal"<<endl;
	}
	
	getch();
}