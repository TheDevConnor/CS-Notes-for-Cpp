// Write a program that computes the tax and the tip on a restaurant bill for a
// patron with a $44,50 meal charge. The tax should be 6.75% of the meal cost.
// The tip should be a 15% of the total after adding the tax. Display the meal
// cost, tax amount, tip amount, and the total bill.
#include <iostream>

double calculateBill(double charge, double tax, double tip) {
  double taxAmount = charge * tax;
  std::cout << "Tax amount: " << taxAmount << "\n";

  double subTotale = charge + taxAmount;
  std::cout << "Subtotale: " << subTotale << "\n";

  double tipTotal = subTotale * tip;
  std::cout << "Tip: " << tipTotal << "\n";

  return subTotale + tipTotal;
}

int main() {
  double bill = calculateBill(44.50, 0.0675, .15);
  std::cout << "Total Bill is: " << bill << "\n";
  return 0;
}
