/*
  Calculate the Current Balance in a Savings Account
  Inputs:
    Starting Balance
    Amount of deposits made
    Amount of withdrawals made
    Monthly Interest rate

  Processing
    Add deposits to the balance
    Sub the withdrawls from the balance
    Calcualte the interest
      interest = balance * interest rate

  Flow chart
                  start
                    |
    Display "enter the starting balance"
                    |
                Get balance
                    |
    Display "enter the amount of deposits"
                    |
               Get deposits
                    |
    Display "enter the amount of withdrawls"
                    |
              Get withdrawls
                    |
    Display "enter the Monthly Interest rate"
                    |
            Get interest rate
                    |
          add deposits to balance
                    |
        sub withdrawls from balance
                    |
      interest = balance * interest rate
                    |
         add interest rate to balance
                    |
             Display Balance
                    |
                   end
 */

#include <iostream>

float balance = 10000;
float deposits = 1500.0;
float withdrawls = 300.30;
float intRate = .15;

int main() {
  balance = balance + deposits - withdrawls + (balance * intRate);
  std::cout << balance << std::endl;
  return 0;
}
