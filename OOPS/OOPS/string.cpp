#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	char s1[10],s2[10];
	clrscr();
//length
	cout<<"Enter String: "<<endl;
	cin>>s1;
	cout<<strlen(s1)<<endl;

//copy	
	strcpy(s1,s2);
	cout<<"String 1: "<<s1<<endl;
	cout<<"String 2: "<<s2<<endl;
	
//concat	
	cout<<"Enter String 1: "<<endl;
	cin>>s1;
	cout<<"Enter String 2: "<<endl;
	cin>>s2;
	strcat(s1,s2);
	cout<<s1<<endl;
	
//compare	
	cout<<"Enter String 1: "<<endl;
	cin>>s1;
	cout<<"Enter String 2: "<<endl;
	cin>>s2;
	cout<<strcmp(s1,s2)<<endl;
	getch();
}
