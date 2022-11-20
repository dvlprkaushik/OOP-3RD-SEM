// Q3) WAP to demonstrate the order of call of constructors and destructors in case of virtual 
// base class


#include<iostream>
using namespace std;

class Parent{
    public:
        Parent(){
            cout<< "--> Parent Constructor" <<endl;
        }
        ~Parent(){
            cout<< "--> Parent Destructor" <<endl;
        }
        void func(){
            cout<< "--> Parent Virtual method" <<endl;
        }
};

class Child1 : virtual public Parent{
    public:
		Child1(){
			cout<< "--> Child 1 Constructor" <<endl;
		}
        ~Child1(){
			cout<< "--> Child 1 Destructor" <<endl;
		}
};

class Child2 : virtual public Parent{
    public:
		Child2(){
			cout<< "--> Child 2 Constructor" <<endl;
		}
        ~Child2(){
			cout<< "--> Child 2 Destructor" <<endl;
		}
};

class GrandChild : public Child1, public Child2{
    public:
		GrandChild(){
			cout<< "--> GrandChild Constructor called" <<endl;
		}
        ~GrandChild(){
			cout<< "--> GrandChild Destructor called" <<endl;
		}
};

int main(){
    cout << "--- Order of call in virtual base class ---"<<endl;
	GrandChild c;
	c.func();
}