#include <iostream>
using namespace std;
float appartment(string month,int stays);
float  studio (string month,int stays);
main()
{
    string month;
    int stays;
    float result1,result2;
    cout<<"enter the month : ";
     cin>>month;
    cout<<"enter the stays : ";
cin>>stays;
result2=appartment(month,stays);
cout<<"appartment "<<result2<<"$"<<endl;
result1=studio(month,stays);
cout<<"studio  "<<result1<<"$"<<endl;
}
float  studio (string month,int stays)
{
float result1;
if(stays<7 && (month=="may" || month=="october"))
{
result1=50.0*stays;
}
else if((stays>=7 && stays<=14) && (month=="may" || month=="october"))
{
result1=50.0*stays;
result1=result1-(0.05*result1);
}
else if((stays>14) && (month=="may" || month=="october"))
{
result1=50.0 * stays;
result1=result1-(0.30*result1);
}
else if((stays>14) && (month=="june" || month=="september"))
{
result1=75.20 * stays;
result1=result1-(0.20*result1);
}
else if((stays<=14) && (month=="june" || month=="september"))
{
    result1=stays*75.20;
}
else if (month=="july" || month=="august")
{
    result1=stays * 76.0;
}
return result1;
}
float appartment(string month,int stays)
{
float result2;

if((stays>14) && (month=="may" || month=="october"))
{
    result2=stays*65;
    result2=result2-(0.10*result2);
}
else if ((stays>14) && (month=="june" || month=="september"))
{
    result2=stays*68.70;
    result2=result2-(0.10*result2);
}
else if ((stays>14) && (month=="july" || month=="august"))
{
    result2=stays*77.0;
    result2=result2-(0.10*result2);
}
else if((stays<=14) && (month=="may" || month=="october"))
{
result2=stays*65.0;
}
else if((stays<=14) && (month=="june" || month=="september"))
{
result2=stays*68.70;
}
else if((stays<=14) && (month=="july" || month=="august"))
{
result2=stays*77.0;
}
return result2;
}









