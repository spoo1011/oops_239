#include<iostream>
using namespace std;
class Shape
{
protected:
    float x;
public:
    void getData(){cin>>x;}
    virtual float calculateArea()=0;
};
class Square : public Shape
{
public:
    float calculateArea()
    {
        return x*x;
    }
};
class Circle : public Shape
{
public:
    float calculateArea()
    {
        return 3.14*x*x;
    }
};
int main()
{
    Square s;
    Circle c;

    cout<<"--- Square ---"<<endl;
    s.getData();
    cout<<"Area of Square = "<<s.calculateArea()<<endl;

    cout<<"\n--- Circle ---"<<endl;
    c.getData();
    cout<<"Area of Circle = "<<c.calculateArea()<<endl;

    return 0;
}
