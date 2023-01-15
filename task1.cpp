#include <iostream>
using namespace std;
string activity(string temperature,string humidity);
main()
{
string temperature,humidity,result;
cout<<"enter the temperature : ";
cin>>temperature;
cout<<"enter the humidity : ";
cin>>humidity;
result=activity(temperature,humidity);
cout<<result;
}
string activity(string temperature,string humidity)
{
    string output;
if(temperature=="warm" && humidity=="dry")
{
output="PlayTennis";
}
else if(temperature=="warm" && humidity=="humid")
{
output="swim";
}
else if(temperature=="cold" && humidity=="dry")
{
output="Playbasketball";
}
else if(temperature=="cold" && humidity=="humid")
{
output="WatchTV";
}
return output;
}










