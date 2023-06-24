// write a C++ class called "Student" that has three
// private member variables: "name", 'age". and "gender"
// The class should have d constructor that initializes
// these member variables and a public member Function
// called "displayInFo" that prints out Lhe student's
// name, age, and gender.
#include<iostream>
using namespace std;
class Student {
    private:
    string name;
    int age;
    char gender;
    public:
    //constructor function to initialize the data members of this object
    void setInfo(string n,int ag,char ge) {
        name =n ;
        age=ag; 
        gender=ge;
        }
    void displayInfo() {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Gender"<<gender<<endl;
        }
    };

int main() {
    Student s1;
    s1.setInfo("Sheekha",20,'F');
    s1.displayInfo();
    return 0;
    }
