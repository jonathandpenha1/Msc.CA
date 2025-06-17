#include<iostream.h>
#include<conio.h>

class Worker
{
	int hours,payrate;
	long int salary;
	char wname[20];
	public:
	void accept()
	{
		cout<<"Enter Worker details"<<endl;
		cout<<"Name, No.hours worked, payrate: "<<endl; 
		cin>>wname;
		cin>>hours;
		cin>>payrate;
		salary=hours*payrate;
		
	}
	void display()
	{
		cout<<"Worker details"<<endl;
		cout<<"Worker name: "<<wname<<endl;
		cout<<"Hours worked: "<<hours<<endl;
		cout<<"Salary: "<<salary<<endl;

		

	}
};

	void main()
	{

		clrscr();
		int n,i;
		Worker obj;
		
		cout<<"Enter Number of Workers: "<<endl;
		cin>>n;
		for(i=0;i<n;i++)
		{
			obj.accept();
			obj.display();
		}
		getch();
	}