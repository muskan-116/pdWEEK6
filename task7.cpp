#include <iostream>
using namespace std;
void examtime(int starthour,int startmints,int arrivalhour,int arrivalmints);
main()
{
int starthour,startmints,arrivalhour,arrivalmints;
cout<<"enter start hour : ";
cin>>starthour;
cout<<"enter start minutes :";
cin>>startmints;
cout<<"enter arrival hour : ";
cin>>arrivalhour;
cout<<"enter arrival minutes : ";
cin>>arrivalmints;
examtime(starthour,startmints,arrivalhour,arrivalmints);
}
void examtime(int starthour,int startmints,int arrivalhour,int arrivalmints)
{
int startconverter,startconverter1,arrivalconverter,arrivalconverter1,output,mints,hours,beforetime;
startconverter=60*starthour;
startconverter1=startconverter+startmints;
arrivalconverter=60*arrivalhour;
arrivalconverter1=arrivalconverter+arrivalmints;
beforetime=startconverter1-30;
if(startconverter1<arrivalconverter1)
{
cout<<"LATE "<<endl;
output=arrivalconverter1-startconverter1;
mints=(output%60);
hours=(output/60);
cout<<hours<<":"<<mints<<"  after the time .";
}
else if(beforetime>=arrivalconverter1)
{
cout<<"EARLY"<<endl;
output=startconverter1-arrivalconverter1;
mints=(output%60);
hours=(output/60);
cout<<hours<<":"<<mints<<" before  the time .";
}
else if(beforetime<arrivalconverter1)
{
cout<<"EARLY"<<endl;
output=startconverter1-arrivalconverter1;
mints=(output%60);
hours=(output/60);
cout<<hours<<":"<<mints<<" before  the time .";
}

else if((arrivalconverter1>=beforetime) && (startconverter1==arrivalconverter1))
{
cout<<"ON TIME "<<endl;
output=startconverter1-arrivalconverter1;
mints=(output%60);
hours=(output/60);
cout<<hours<<":"<<mints<<"          before  the time .";
}
}




























































