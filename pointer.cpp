//cpp program using the concept of this pointer
#include<iostream>
using namespace std;

class Sample
{
    int a,b;
public:
    void input (int a, int b)
    {
        this->a= a+b;
        this->a= a-b;
    }
    void output()
    {
        cout<<"a="<<a;
        cout<<"b="<<b;
    }
};
int main()
{
    Sample ob1;
    int a=5,b=8;
    ob1.input(a,b);
    ob1.output();
}
