
#include <iostream>
#include <string>
using namespace std;

//Write a program that determines the percentage of passing students within a course.
// (Suppose there  are 2 students passing out of 10 students)
// The percentage of passing students can be calculated as 2 div÷10 = 0.2 or 20%
int main()
{ 
float students;
float grade;
float passing;
float per;
// ask the user how many students are in the course 
 cout << "How many students are in this course?" << endl;
 cin >> students;  
//how many students have a passing grade. 
cout << "How many students have a passing grade?" << endl;
 cin >> grade;
//calculate the percentage of passing students.
per = grade*100/students;
cout << "The percentage is" << endl;
cout << per << "%" << endl;

}


