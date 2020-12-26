//Name:
//Date:
//Assignment Name:
//Brief Description of Program: I have been hired to create a program to help college students determine the cost of owning a car

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
//Include others if neccessary

using namespace std;

int main ()
{

cout << "Welcome! This program is designed to help you determine the cost of owning a car." << endl;
cout << "Press Enter when ready" << endl;
cin.get();
//Variable declarations / initialization
double Monthly_Payment;
double Monthly_Insurance; 
double Monthly_Gas;
double Monthly_Miscellaneous;
string name;
double Monthly; // Monthly Cost
double Annually; // Annual Cost
// User Prompts and input
cout << "What is your name?" << endl;
getline( cin, name);
cout << "Enter your Monthly Loan Payment ";
cin >> Monthly_Payment;
cout << "Enter your Monthly Insurance ";
cin >> Monthly_Insurance;
cout << "Enter your Estimated Monthly Gas ";
cin >> Monthly_Gas;
cout << "Enter your Monthly Miscellaneous ";
cin >> Monthly_Miscellaneous;
//Equations / Mathematical expressions

// Monthly Cost
Monthly=(Monthly_Payment + Monthly_Insurance + Monthly_Gas + Monthly_Miscellaneous);
//Annual Cost
Annually=(Monthly * 12);

//Output Display
cout << endl; // Spacer

    cout << setw(40) << "========================================" << endl;
cout << left;
cout << "Name: " << name << endl;
cout << setw(35) << "Monthly Loan Payment:" << "$" << Monthly_Payment << endl;
cout << setw(35) << "Monthly Insurance Cost:" << "$" << Monthly_Insurance << endl;
cout << setw(35) << "Estimated Monthly Gas:" << "$" << Monthly_Gas << endl;
cout << setw(35) << "Estimated Monthly Misc Costs:" << "$" << Monthly_Miscellaneous << endl;
cout << setw(35) << "Monthly Cost:" << "$" << Monthly << endl;
cout << setw(35) << "Annual Cost:" << "$" << Annually << endl;
	cout << setw(40) << "========================================" << endl;
cout << "Thank you and Goodbye!";
		return 0;
		
}


