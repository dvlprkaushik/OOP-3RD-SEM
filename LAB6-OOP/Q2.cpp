// OOPs LAB Assignment 6 -

#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        int roll;
        int age;
        void GetStudentInfo(){
            cout <<"\nEnter name of the student : ";
            getline (cin>>ws, name);
            cout <<"Enter roll no. of the student : ";
            cin >> roll;
            cout <<"Enter age of the student : ";
            cin >> age;
        }
};

class Test: public Student{
    float marks[5];
    public: 
        void GetMarks(){
            cout <<"\nEnter marks for 5 subjects between (0-100) -\n";
            for (int i=0; i<5; i++){
                cin >> marks[i];
            }
        }
        void ShowAllDetails(){
            cout <<"\nThe student - '"<<name<<"', Age-"<<age<<"years, of Roll-"<<roll<<", ";
            cout <<"has marks for 5 subjects as - ";
            for (int i=0; i<5; i++) cout<<marks[i]<<" ";
        }
};

int main(){
    Test student1;
    student1.GetStudentInfo();
    student1.GetMarks();
    student1.ShowAllDetails();

    return 0;
}