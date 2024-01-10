/// Assignment Statements
//      idNumber = 22; // 8-bit intger
//  the '=' is the assignment op
//    this checks the left hand side for the name so 'idNumber'
//    and stores the right hand side the '22' or number litteral to it.
//
//  Math Operations in cpp
//    +, -, /, *, % (Modulus(the remander))

#include <iostream>
int simpleMath(int a, int b, char c) {
  switch (c) {
  case '+':
    return a + b;
  case '-':
    return a - b;
  case '*':
    return a * b;
  case '/':
    return a / b;
  case '%':
    return a % b;
  default:
    std::cerr << "unknown operation: " << c << "\n";
  }
  return 0;
}

int main() {
  char op = '+';
  std::cout << "result: " << simpleMath(200, 200, op) << "\n";
}
