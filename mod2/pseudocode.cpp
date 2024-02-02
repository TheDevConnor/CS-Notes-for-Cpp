/* Pseudocode
  * Pseudocode = "fake code"
  * An informal way of writing the
    steps that a program should perform

The Logic for calculating an employee's groos pay

// Output prompt for the number of hours worked
cout "Number of hours the employee worked"
// Input the number of hours
cin hours

// Output prompt for the employee's hourly pay rate
cout "Employee's hourly pay rate"
// Input the pay rate
cin payRate

// Calculate gross pay
grossPay = hours * payRate

// Output the gross pay
cout "Gross pay: " grossPay

tranlates too */

#include <iostream>

double hours = 0;
double payRate = 0;
double grossPay = 0;

int main() {
  std::cout << "Number of Hours worked: ";
  std::cin >> hours;
  std::cout << "hourly pay rate: ";
  std::cin >> payRate;

  grossPay = hours * payRate;
  std::cout << "GrossPay: " << grossPay << std::endl;

  return 0;
}


