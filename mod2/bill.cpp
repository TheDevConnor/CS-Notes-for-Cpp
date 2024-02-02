/*
  Write a program that computes the tax and tip on a bill for a patron
  with a $44.50 meal charge. The tax should be 6.75% of the meal cost. The
  tip should be 15% of the total after adding the tax. Display the meal cost,
  tax amount, tip amount, and the total bill on the screen.
 */

#include <iostream>

int main() {
  int arrayLen = 0;
  int *nums = new int[arrayLen];
  int result = 0;

  std::cout << "Length of array: ";
  std::cin >> arrayLen;
  std::cout << "Input Array: ";
  for (int i = 0; i < arrayLen; i++)
    std::cin >> nums[i];
  std::cout << "Target result: ";
  std::cin >> result;

  for (int i = 0; i < &nums.size(); i++) {} 

  return 0;
}
