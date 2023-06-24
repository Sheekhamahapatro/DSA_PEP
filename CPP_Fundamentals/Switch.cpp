// DO it using switch case
// take user input for their marks
//if marks are 10<< cout that student has failed

#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    switch(marks)
    {
        case 10:
        cout<<"You have failed";
        break;
        case 20:
        cout<<"Student need improvement";
        break;
        case 30:
        cout<<"Student has passed";
        break;
        default:
        cout<<"Invalid marks";
        break;
        }
        return 0;
        }
    

        