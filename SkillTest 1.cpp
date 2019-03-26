#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>

using namespace std;

int main()
{

	double rate;
	double hrs;
	
	cout << fixed << showpoint << setprecision(2)<< endl;
	
	
// Inputs
	cout << "What is the hourly rate of your summer job? \n$";
	cin >> rate;
	
	cout << "How many hours do you work per week for 5 weeks? \n";
	cin >> hrs;
	
// Formula
	double income = (rate*hrs)*5;
	double netincome = income-(income*0.14);
	double clothesmoney = netincome*0.10;
	double schoolmoney = netincome*0.01;
	double netincome2 = (netincome-clothesmoney)-schoolmoney;
	double savings = netincome2*0.25;
	double parents = savings*0.50;
	double left = netincome2-savings;

// Output	
	cout << "You earned $" << income << " from the 5 weeks of your summer job."; cout << " Your net income is $" << netincome << " after tax expenses." <<endl;
	cout << "You spent $" << clothesmoney << " for your clothes, another $" << schoolmoney << " for your school supplies, and $" << savings << " for your savings bond."<< endl;
	cout << "Your parents chipped in and spent $" << parents << " as an addition to your savings bond."<< endl;
	cout << "After all the expenses, the money you still have left is $" << left <<endl;

	
	
	getch ();
	return 0;
}
