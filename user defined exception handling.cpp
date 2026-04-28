//user defied exception handling
#include<iostream>
using namespace std;
int main()
{
try {int age=15;
if(age>=18)
{cout<<"Access Granted";}
else{throw(age);}
}
catch(int myNum)
{cout<<"Access denied\n";
cout<<"Age is:"<<myNum;}
}


//payment gateway
//medical devices like ventilators
//gaming systems exception handling is amg among these and to showcase those
