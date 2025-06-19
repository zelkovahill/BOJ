#include <iostream>

int main()
{
  double A;
  double B;
  std::cin >> A >> B;

  std::cout.precision(9);
  std::cout << std::fixed;

  std::cout << A / B << std::endl;
  std::cout.unsetf(std::ios::fixed);

  return 0;
}