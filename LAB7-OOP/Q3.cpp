// OOPs LAB Assignment - 7
// Q7) Extend the program ii. of inheritance to include a class 
// sports, which stores the marks in sports activity. Derive the 
// result class from the classes ‘test’ and ‘sports’. Create
// objects using parameterized constructors .Calculate the total
// marks and percentage of a student.

#include <iostream>
using namespace std;

class Student{
    protected:
        string name;
        int roll;
        int age;
        Student(string n, int r, int a){
            name = n;
            roll = r;
            age = a;
        }
};

class Test: public Student{
    public: 
        float marks[5];
        Test(string n, int r, int a, float m[])
            :Student(n, r, a){
            for (int i=0; i<5; i++){
                marks[i] = m[i];
            }
        }
};

class Sports{
    public:
        float mark;
        Sports(float m){
            mark = m;
        }
};

class Result: public Test, public Sports{
    float s=0;
    public:
        Result(string n, int r, int a, float _marks[], float _mark) 
        :Test(n, r, a, _marks), 
        Sports(_mark)
        {
            for (int i=0; i<5; i++) marks[i] = _marks[i];
            mark = _mark;

            for (int i=0; i<5; i++){
                s+=marks[i];
            }
            s+= mark;
            cout << "\nStudent '"<<name<<"' of roll-"<<roll<<", and age-"<<age<<", has result ----";
            cout << "\nTotal Sum is = "<<s<<" out of 600.";
            cout << "\nPercentage is = "<<s/6<<"%";
        }
};

int main(){
    float s1_marks[5] = {78, 77.9, 81.4, 78.5, 84}, s1_mark = 75;
    Result ("Kaushik Das", 22057037, 19, s1_marks, s1_mark);

    float s2_marks[5] = {88, 64, 29, 51, 53}, s2_mark = 59;
    Result ("Sean", 12758809, 19, s1_marks, s2_mark);

    return 0;
}