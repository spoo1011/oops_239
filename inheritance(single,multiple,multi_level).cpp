#include<iostream>
using namespace std;

// -------- BASE CLASS --------
class Person
{
private:
    int id;

protected:
    int marks;

public:
    void setData()
    {
        cout<<"Enter ID: ";
        cin>>id;

        cout<<"Enter Marks: ";
        cin>>marks;
    }

    void showData()
    {
        cout<<"ID = "<<id<<endl;
        cout<<"Marks = "<<marks<<endl;
    }
};

// -------- SINGLE INHERITANCE --------
class Result : public Person
{
public:
    void showResult()
    {
        cout<<"Marks (Single Inheritance) = "<<marks<<endl;
    }
};

// -------- MULTIPLE INHERITANCE --------
class Subject1
{
public:
    int m1;
};

class Subject2
{
public:
    int m2;
};

class Total : public Subject1, public Subject2
{
public:
    void setMarks()
    {
        cout<<"Enter Subject 1 marks: ";
        cin>>m1;

        cout<<"Enter Subject 2 marks: ";
        cin>>m2;
    }

    void showTotal()
    {
        cout<<"Total Marks (Multiple) = "<<m1 + m2<<endl;
    }
};

// -------- MULTILEVEL INHERITANCE --------
class Student : public Person
{
};

class FinalResult : public Student
{
public:
    void showFinal()
    {
        cout<<"Marks (Multilevel) = "<<marks<<endl;
    }
};

// -------- MAIN FUNCTION --------
int main()
{
    // Single Inheritance
    cout<<"--- Single Inheritance ---"<<endl;
    Result r;
    r.setData();
    r.showData();
    r.showResult();

    // Multiple Inheritance
    cout<<"\n--- Multiple Inheritance ---"<<endl;
    Total t;
    t.setMarks();
    t.showTotal();

    // Multilevel Inheritance
    cout<<"\n--- Multilevel Inheritance ---"<<endl;
    FinalResult f;
    f.setData();
    f.showFinal();

    return 0;
}
