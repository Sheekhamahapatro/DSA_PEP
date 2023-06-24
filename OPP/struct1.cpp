//write a program to store and print the roll number , age and name of 3 students (s1,s2,s3)
//using struct
#include<iostream>
#include<string>
using namespace std;
struct student
{
    int roll;
    int age;
    string name;
};
int main(){
    student s1;
    student s2;
    student s3;
    s1.roll=1;
    s1.age=20;
    s1.name="Sheekha";
    s2.roll=2;
    s2.age=21;
    s2.name="Shreya";
    s3.roll=3;
    s3.age=22;
    s3.name="Shruti";
    cout<<"Roll no. of student 1 : "<<s1.roll<<endl;
    cout<<"Age of student 1 : "<<s1.age<<endl;
    cout<<"Name of student 1 : "<<s1.name<<endl;
    cout<<"Roll no. of student 2 : "<<s2.roll<<endl;
    cout<<"Age of student 2 : "<<s2.age<<endl;
    cout<<"Name of student 2 : "<<s2.name<<endl;
    cout<<"Roll no. of student 3 : "<<s3.roll<<endl;
    cout<<"Age of student 3 : "<<s3.age<<endl;
    cout<<"Name of student 3 : "<<s3.name<<endl;
    return 0;

}