/*

Connor Harris
COP 2000
02/02/2024

A Theater you are opening needs a program to calculate how much income was
generated from each sales of different box office seats. The program should ask
the user for the number of each type of box office seat sold for the night and
then output the total for each type of seat and the overall total. There are
five types of seats, Balcony, Grand Tier, Loge, Mezzanine, and Orchestra.

The pricing is as follows:
Balcony: $50.00
Grand Tier: $175.25
Loge: $125.00
Mezzanine: $100.00
Orchestra: $230.50

have x := the amount of seats sold
then times x to 50 to find how much money was made.

*/

#include <iostream>

int main() {
  int x = 0;

  float mezzanine = 100;
  float balcony = 50;
  float loge = 125;

  float grandTier = 175.25;
  float orchestra = 230.50;

  std::cout << "Total number of seats sold for baclcony seating (as int): ";
  std::cin >> x;
  balcony = static_cast<double>(balcony * x);

  std::cout << "Total number of seats sold for grand tier seating (as int): ";
  std::cin >> x;
  grandTier = static_cast<double>(grandTier * x);

  std::cout << "Total number of seats sold for loge seating (as int): ";
  std::cin >> x;
  loge = static_cast<double>(loge * x);

  std::cout << "Total number of seats sold for mezzanine seating (as int): ";
  std::cin >> x;
  mezzanine = static_cast<double>(mezzanine * x);

  std::cout << "Total number of seats sold for orchestra seating (as int): ";
  std::cin >> x;
  orchestra = static_cast<double>(orchestra * x);

  std::cout << "WallStreet Theater Ticket Sales" << std::endl;
  std::cout << "-------------------------------" << std::endl;
  std::cout << "Balcony:     $" << balcony << std::endl;
  std::cout << "Grand Tier:  $" << grandTier << std::endl;
  std::cout << "Loge:        $" << loge << std::endl;
  std::cout << "Mezzanine:   $" << mezzanine << std::endl;
  std::cout << "Orchestra:   $" << orchestra << std::endl;

  float total =
      static_cast<double>(balcony + grandTier + loge + mezzanine + orchestra);
  std::cout << "Total Sales: $" << total << std::endl;

  exit(0);
}
