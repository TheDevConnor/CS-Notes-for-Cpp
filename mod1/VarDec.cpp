// Mod1 Vars
// the way you define a var in cpp is by declaring the type then
// its name, then the value.
// Lets define an value of 500 (a 16-bit integer or an int)
// and have the name be distance

/// Data Types
// an integer can strore any whole number '1'
// while a double can store a floating point number '2.5'
// There
// There are more data types for an integer based off of how
// big the integer is.
//        [short,
//        unsigned short,
//        int,
//        unsigned int,
//        long,
//        unsigned long]
// The same is for doubles or floating point numbers
//        [float,
//        double,
//        long double]
// Where as a 'char' deals with characters and a bool
// deals with conditional statments.
//
// Variable names:
//  Var names should be meaningful
//  They must begin with a letter or an underscore '_'
//    After the first letter or '_' it can be numbers or letters
//  Var names have to have no spaces so one word
//    good (tokenizeFunction) bad(tokenize Function)
//

#include <iostream>
int main() {
  int distance = 500;
  double length = 10.4;
  std::cout << "Distance: " << distance << "\n";
  std::cout << "Length: " << length << "\n";
  return 0;
}
