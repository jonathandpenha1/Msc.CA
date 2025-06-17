#include<iostream.h>
#include<conio.h>

void main()
{
    clrscr();
int a[2][2],i,j,b[2][2],c[2][2],k,sum;
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

cout<<"Multipliation is: "<<endl;
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
sum=0;
for(k=0;k<2;k++)
{
sum= sum+a[i][k]*b[k][j];
}
c[i][j]=sum;
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
getch();
}