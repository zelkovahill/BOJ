#include <iostream>

int main()
{
  int A;
  int B;

  std::cin >> A >> B;

  int sum = A + B;
  int difference = A - B;
  int prduct = A * B;
  int quotient = A / B;
  int remainder = A % B;

  std::cout << sum << "\n";
  std::cout << difference << "\n";
  std::cout << prduct << "\n";
  std::cout << quotient << "\n";
  std::cout << remainder << "\n";

  return 0;
}