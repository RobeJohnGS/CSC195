#include <iostream>
using namespace std;

int main(){
	string name;
	char initial;
	unsigned short age;
	bool isAdult;
	string zipcode;
	float wage;
	unsigned short daysWorked;
	unsigned short hoursWorkedPerDay[7];
	unsigned short totalHours = 0;

	float tax = 0.1f;

	//Get name
	cout << "Enter first name\n";
	cin >> name;

	//Takes the first letter of the name and set it to the initial
	cout << "Enter last name initial.\n";
	cin >> initial;

	//Get age
	cout << "Enter your age.\n";
	cin >> age;

	//Set isAdult if they are 18 or above
	if (age >= 18) {
		isAdult = true;
	}
	else {
		isAdult = false;
	}

	//Get zipcode
	cout << "Enter your zipcode.\n";
	cin >> zipcode;

	//Get wage
	cout << "Enter you wage.\n";
	cin >> wage;

	//Get days worked
	cout << "Enter the amount of days you worked this week.\n";
	cin >> daysWorked;

	//Get hours worked
	for (int i = 0; i < daysWorked; i++) {
		cout << "Enter hours worked for day " << i + 1 << ".\n";
		cin >> hoursWorkedPerDay[i];
		//Get total hours
		totalHours = totalHours + hoursWorkedPerDay[i];
	}

	//Display info
	cout << name << " worked " << totalHours << " hours at " << wage << " per hour.\n";
	
	//Gross income
	float grossIncome = totalHours * wage;
	cout << "Gross income: " << grossIncome << "\n";

	//Net income
	float netIncome = grossIncome - (grossIncome * tax);
	cout << "Net income: " << netIncome << "\n";
}