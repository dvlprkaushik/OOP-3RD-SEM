// OOPs LAB Assignment - 10
// Q2) WAP to display data of two different types using
// function template with multiple arguement

#include <iostream>
#include <vector>
using namespace std;

template <typename T1, typename T2> void Display(T1 a, T2 b){
    cout << endl << a << " " << b;
}

int main (){
    int i = 7;
    float f = 37.77;
    char c = 'K';
    string s = "Siuuuuuu";

    Display(i, s);
    Display(f, c);
}