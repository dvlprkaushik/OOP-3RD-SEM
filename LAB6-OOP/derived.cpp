#include<stdio.h>
#include<stdlib.h>
#include<iostream>


using namespace std;

class A
{
    public:
    int x;

};

class B:public A
{
    public:

    B()
    {
        x = 20;
    }

};

class C
{
    public:
    int y;
    C()
    {
        y = 7;
    }
};

class D : public B,public C
{
    public:
    void sum()
    {
        cout<<"Sum = "<<x+y;
    }

};

int main(){

    D obj1;
    obj1.sum();


    
    return 0;

}