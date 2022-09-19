#include <iostream>

int main() {
  double num1;
  double num2;
  double num3;

  std::cin >> num1;
  std::cin >> num2;
  std::cin >> num3;

  if (num3 > num2 && num2 > num1){
    std::cout << "Increasing \n";
  }
  else if (num1 > num2 && num2 > num3){
    std::cout << "Decreasing \n";
  }
  else {
    std::cout << "Neither \n";
  }
  }
