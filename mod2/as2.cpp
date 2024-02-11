#include <iostream>

int main() {
  float x = 0;

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
