#include <iostream>
using namespace std;
float ratelist(float quantity,string fruit);
float weekend(float quantity,string fruit);
main()
{
string day,fruit;
float result;
float quantity;
cout<<"enter the day : ";
cin>>day;
cout<<"enter quantity : ";
cin>>quantity;
cout<<"enter fruit name  : ";
cin>>fruit;


if (day =="monday" || day =="tuesday" || day =="wednesday" || day =="thursday" || day =="friday")
{
    result=ratelist(quantity,fruit);
     cout<<result;
}


if(day=="sunday" || day=="saturday")
{
    result=weekend(quantity,fruit);
     cout<<result;
}


}
float ratelist(float quantity,string fruit)
{
float result;
if (fruit =="banana")
{
result=2.50*quantity;
}
else if  (fruit =="apple")
{
result=1.20*quantity;
}
else if  (fruit =="orange")
{
result=0.85*quantity;
}
else if  (fruit =="grapefruit")
{
result=1.45*quantity;
}
else if  (fruit =="kiwi")
{
result=2.70*quantity;
}
else if  (fruit =="pineapple")
{
result=5.50*quantity;
}
else if(fruit =="grapes")
{
    result=3.85*quantity;
}
return result;
}

float weekend(float quantity,string fruit)
{
    float result;
 if(fruit=="banana")
{
result=2.70*quantity;
}
else if(fruit=="apple")
{
result=1.25*quantity;
}
else if(fruit=="orange")
{
result=0.90*quantity;
}
else if (fruit=="grapefruit")
{
result=1.60*quantity;
}
else if (fruit=="kiwi")
{
result=3.00*quantity;
}
else if (fruit=="pineapple")
{
result=5.60*quantity;
}
else if(fruit=="grapes")
{
result=4.20*quantity;
}
return result;
}












