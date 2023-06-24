// Sample Input

// The first line contains , the number of students in Kristen's class. The  subsequent lines contain each student's 5 exam grades for this semester.

// 3
// 30 40 45 10 10
// 40 40 40 10 10
// 50 20 30 10 10
// Sample Output

// 1
// Explanation

// Kristen's grades are on the first line of grades. Only 1  student scored higher than her

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
//Add the students class
class Student{
    private:
    int scores[5];
    public:
    void input(){
        for(int i=0;i<5;i++){
            cin>>scores[i];
        }
    }
    int calculateTotalScore(){
        int sum=0;
        for(int i=0;i<5;i++){
            sum+=scores[i];
        }
        return sum;
    }
};
int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
