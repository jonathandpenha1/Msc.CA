#include<iostream.h>
#include<conio.h>

void main()
{
    clrscr();
int a[2][2],i,j,b[2][2],c[2][2];
cout<<"Enter values for A"<<endl;
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
cin>>a[i][j];
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
cout<<a[i][j];
}
cout<<" "<<endl;
}
cout<<"Enter values B"<<endl;
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
cin>>b[i][j];
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
cout<<b[i][j];
}
cout<<" "<<endl;
}
cout<<" "<<endl;

for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
cout<<c[i][j];
}
cout<<" "<<endl;
}

cout<<" "<<endl;
getch();
}
