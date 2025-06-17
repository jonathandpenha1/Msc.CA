#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int a[3][3],i,j;
cout<<"Enter values"<<endl;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>a[i][j];
}
}
cout<<"Enter values"<<endl;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<a[i][j];
}
cout<<"\n"<<endl;
}


int min;
int max;

    // for finding the max element in given array
    for(i = 0; i<3; i++){
	for(j = 0; j<3; j++){
	    if(max < a[i][j]) max = a[i][j];
	}
    }

    // for finding the min element in given array
    for(i = 0; i<3; i++){
	for( j = 0; j<3; j++){
	    if(min > a[i][j]) min = a[i][j];
	}
    }
    cout << "Maximum = " << max <<endl;
    cout<< "Minimum = " << min;

getch();
}
