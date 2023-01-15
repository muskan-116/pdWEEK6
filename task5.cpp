#include <iostream>
using namespace std;
float regular(char service,string time,int minutes);
float primium(char service,string time,int minutes);

main()
{
char  service;
string time;
int minutes;
float result1,result2;
cout<<"enter the type of servive : ";
cin>>service;
cout<<"enter minutes : " ;
cin>>minutes;

if (service=='p' || service=='P')
{
cout<<"enter the time....... day or night :  ";
cin>>time;
}
if(service=='p' || service=='P')
{
    result1=primium(service,time,minutes);
    cout<<result1<<"$";
}
else if (service=='r' ||  service=='R')
{
result2=regular(service,time,minutes);
    cout<<result2<<"$";
}
else{
    cout<<"error !!!";
}
}
float regular(char service,string time,int minutes)
{
    float result1;
if(minutes<=50)
{
    result1=10.0;
}
else if (minutes>50)
{
result1=minutes-50;
result1=(result1*0.20)+10.0;
}
return result1;
}
float primium(char service,string time,int minutes)
{
float result2;
if(time=="day" && minutes<=75)
{
result2=25.0;
}
else if (time=="day" && minutes >75)
{
result2=minutes-75;
result2=(result2*0.10)+25;

}
else if(time=="night" && minutes<=100)
{
    result2=25.0;
}
else if(time=="night" && minutes>100)
{
result2=minutes-75;
result2=(result2*0.05)+25.0;
}
return result2;


}