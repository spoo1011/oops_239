#include<iostream>
#include<string>
using namespace std;

int main()
{
    int roll, age;
    string name;
    float marks;

    try
    {
        cout<<"Enter Roll No: ";
        cin>>roll;

        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Age: ";
        cin>>age;

        if(age < 18)
            throw age;   // age exception

        cout<<"Enter Marks: ";
        cin>>marks;

        cout<<"\n--- Student Details ---"<<endl;
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Marks: "<<marks<<endl;
    }

    catch(int)
    {
        cout<<"Invalid Age (Must be 18 or above)"<<endl;
    }

    return 0;
}
