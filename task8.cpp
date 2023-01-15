#include<iostream>
using namespace std;
main()
{
int x,y,h;
cout<<"enter the value of x :";
cin>>x;
cout<<"enter the value of y :";
cin>>y;
cout<<"enter the value of h :";
cin>>h;
if((x==1*h || x==3*h,y==0*h || y==4*h) ||  (x==0*h || x==2*h,y==0*h || y==1*h) )
{
cout<<"BORDER";
}
   else if((x>0 && x<3*h && y>0 && y<1*h) || (x>1*h && x>2*h && y>0*h && y<4*h)) 
   {
    cout<<"INSIDE";
}
else
{
cout<<"OUTSIDE";
}
}
