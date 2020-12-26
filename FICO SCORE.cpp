#include <iostream>

using namespace std;

int main(){
cout << "Welcome to the Mortgage Interest Rate Calculator program!" << endl << "Please enter your current FICO credit score: ";
int fico;
float baseInterest = 4.5, extraInterest;
cin >> fico;
if(fico < 0 || fico > 850){
cout << "PLease enter valid fico value. Correct range is 0 to 850";
exit(0);
}
if(fico <500){
cout << "Sorry you dont have enough fico score to be eligible for mortgage. You should have atleast 500 to be eligible" << endl;
exit(0);
}
else if(fico >= 500 && fico <= 579)
extraInterest = 4;
else if(fico >= 580 && fico <= 619)
extraInterest = 2.25;
else if(fico >= 620 && fico <= 659)
extraInterest = 1.5;
else if(fico >= 660 && fico <= 699)
extraInterest = 0.5;
else if(fico >= 700 && fico <= 759)
extraInterest = 0.25;
else extraInterest = 0;

cout << "Based on your credit score of " << fico << ", you are eligible for an interest rate of " << baseInterest+extraInterest << "%" << endl;

return 0;

}


