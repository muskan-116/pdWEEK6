#include <iostream>
using namespace std;
string zsign(int date,string month);
main()
{
int date;
string month,result;
cout<<"enter your birth date :";
cin>>date;
cout<<"enter your birh month : ";
cin>>month;
result=zsign(date,month);
cout<<"your zodiac sign is :"<<result;
}
string zsign(int date,string month)
{
string result;
if (((date>=21 &&  date <=31) && month=="march") || ((date>=1 &&  date<=19) && month=="april"))
{
result="ARIES";
}
else if (((date>=20 &&  date <=30) && month=="april") || ((date>=1 &&  date<=20) && month=="may"))
{
result="TAURUS";
}
else if (((date>=21 &&  date <=31) && month=="may") || ((date>=1 &&  date<=20) && month=="june"))
{
result="GEMINI";
}
else if (((date>=21 &&  date <=30) && month=="june") || ((date>=1 &&  date<=22) && month=="july"))
{
result="CANCER";
}
else if (((date>=23 &&  date <=31) && month=="july") || ((date>=1 &&  date<=22) && month=="august"))
{
result="LEO";
}
else if (((date>=23 &&  date <=31) && month=="august") || ((date>=1 &&  date<=22) && month=="september"))
{
result="VIRGO";
}
else if (((date>=23 &&  date <=30) && month=="september") || ((date>=1 &&  date<=22) && month=="october"))
{
result="LIBRA";
}
else if (((date>=23 &&  date <=31) && month=="october") || ((date>=1 &&  date<=21) && month=="november"))
{
result="SCORPIO";
}
else if (((date>=22 &&  date <=30) && month=="november") || ((date>=1 &&  date<=21) && month=="december"))
{
result="SAGITARIOUS";
}
else if (((date>=22 &&  date <=31) && month=="december") || ((date>=1 &&  date<=19) && month=="january"))
{
result="CAPRICON";
}
else if (((date>=20 &&  date <=31) && month=="january") || ((date>=1 &&  date<=18) && month=="febuary"))
{
result="AQUARIOUS";
}
else if (((date>=19 &&  date <=29) && month=="febuary") || ((date>=1 &&  date<=20) && month=="march"))
{
result="PISCES";
}
return result;
}












