// Q4) Create a class which allocates the memory for a string
// through dynamic constructor.Overload the binary + to
// concatenate two strings and display it

#include <iostream>
#include <string.h>
using namespace std;

class MyString{
    int length;
    char *str;
    public:
        MyString (){
            length=0;
            str = new char(length+1);
        }
        MyString(char *s){
            length=strlen(s);
            str=new char[length+1];
            strcpy(str,s);
        }
        void Display(){
            cout << "The String is : ";
            puts(this->str);
        }
        friend MyString operator+(MyString &s1, MyString &s2);
        friend void show(MyString &s);
};

MyString operator+(MyString &s1, MyString &s2){
    MyString s;
    s.length = s1.length + s2.length;
    delete s.str;
    s.str=new char[s.length+1];
    strcpy(s.str,s1.str);
    strcat(s.str,s2.str);
    return s;
}

int main(){
    MyString s1((char*)" Today ");
    MyString s2((char*)" is a great day to be alive ");
    MyString s3 = s1 + s2;
    cout<<"String 3 is : ";
    s3.Display();

    return 0;
}