#include <iostream>
using namespace std;
string  marks(float percentage);
main()
{
string name;
string grade;
int totalmarks,math,english,chemistry,socialsciene,biology;
float percentage;
cout<<"enter your name :";
cin>>name;
cout<<"enter your maths marks : ";
cin>>math;
cout<<"enter your english marks  : ";
cin>>english;
cout<<"enter your chemistry marks : ";
cin>>chemistry;
cout<<"enter your socialsciences marks : ";
cin>>socialsciene;
cout<<"enter your biology marks : ";
cin>>biology;
totalmarks=math+english+chemistry+socialsciene+biology;
cout<<"total marks : "<<totalmarks<<endl;
percentage=(totalmarks*100)/500;
cout<<"percentage   : "<<percentage<<endl;
grade=marks(percentage);
cout<<"grade is    :" <<grade<<endl  ;
}
string  marks(float percentage)

{
    string grade;
if(percentage>90 )
{
    grade="A+";
}
if(percentage>80  && percentage<=90)
{
    grade="A";
}
if(percentage>=70 && percentage<=80 )
{
    grade="B+";
}
if(percentage>60 && percentage<=70 )
{
    grade="B";
}
if(percentage>50 && percentage<=60  )
{
    grade="C";
}
if(percentage>40  && percentage<=50 )
{
    grade="D";
}
if(percentage<=40 )
{
    grade="F";
}
return grade ;
}






