#include <iostream>

int main(){

  std::cout << "Please enter a temperature in degrees fairnehiet" << std::endl;
  float temp_f;
  std::cin >> temp_f;

  float temp_c = (32 + temp_f) / (5/9);
  std::cout << "The temperature in degrees celcius is " << temp_c << std::endl;
  return 0;
}