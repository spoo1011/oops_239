#include<iostream>
using namespace std;
class Abc
{
public:
    int a=50;
};
int main()
{
    Abc ob1;
    Abc *ptr;
    ptr = &ob1;
    cout<< ob1.a;
    cout<< ptr->a;// accessing member with pointer

}

