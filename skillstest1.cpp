#include <iostream>
#include <iomanip>
#include<conio.h>

using namespace std;

int main()
{
    double hourlyrate, gross_income, net_income, school_cost, bonds;
    double clothes_cost, parents_bond, hours;
    
    const double tax= 0.14;
    const double clothes_percentage = 0.10;
    const double school_percentage = 0.01;
    const double bonds_percentage = 0.25;
    const double parents_bond_percent = 0.50;
    
    cout << "How many hours did you work: ";
    cin >> hours;
    
    cout << "What was the hourly rate: $";
    cin >> hourlyrate;
    
    gross_income = hours * hourlyrate;
    net_income = gross_income*(1-tax);
    clothes_cost = net_income * clothes_percentage;
    school_cost = net_income * school_percentage;
    net_income = net_income-(clothes_cost + school_cost);
    bonds = net_income * bonds_percentage;
    parents_bond = bonds * parents_bond_percent;
    
    cout << fixed << showpoint << setprecision(2);
	
	cout << "\n\n(a)Your income \n   (1)before taxes: " << gross_income  <<"\t(2)after taxes: " << net_income<<endl;  
	cout << "(b) Money spent on clothes and other accessories: " << clothes_cost << endl;
    cout << "(c) Money spent on school supplies: " << school_cost << endl;
    cout << "(d) Money spent to buy savings bonds: " << bonds << endl;
	cout << "(e) Additional savings bond by parents' expenses: "<<parents_bond<<endl;
    
    -getch();
    return 0;
}
