#include<iostream.h>
#include<conio.h>

class employee
{
	public:
	int ecode,salary;
	char ename[20];
	public:
	void get()
	{
		cout<<"Enter employee details: "<<endl;
		cin>>ecode>>ename;
	}
};

class fulltime:public employee
{
	public:
	int dailywages,NoOfDays;
	public:
	void getf()
    {
        cout << "Enter fulltime employee details: " << endl;
        cin >> dailywages >> NoOfDays;
        salary = NoOfDays * dailywages;
    }
	void putf()
	{
		cout<<"Fulltitme employee details are: "<<ecode<<ename<<salary<<endl;
	}
};

class parttime:public employee
{
	public:
	int hourlywages,NoOfHours;
	public:
	void getp()
    {
        cout << "Enter parttime employee details: " << endl;
        cin >> hourlywages >> NoOfHours;
        salary = NoOfHours * hourlywages;
    }	void putp()
	{
		cout<<"Fulltitme employee details are: "<<ecode<<ename<<salary<<endl;
	}
};

void main()
{
	clrscr();
	fulltime f[10];
	parttime p[10];
	int i;
	
    // for full-time
    for (i = 0; i < 2; i++)
    {
        f[i].get();
        f[i].getf();
    }

    for (i = 0; i < 2; i++)
    {
        f[i].putf();
    }

    // for part-time
    for (i = 0; i < 2; i++)
    {
        p[i].get();
        p[i].getp();
    }

    for (i = 0; i < 2; i++)
    {
        p[i].putp();
    }	
	getch();
}