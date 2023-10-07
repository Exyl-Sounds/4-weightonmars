#include <iostream>

int main() {
  // Declaring some variables
  double itemWeight;
  double itemWeightMars;

  // Taking user input and storing it
  std::cout << "Enter the weight of your item in kilos: ";
  std::cin >> itemWeight;

  // Small calculation of weight on mars
  itemWeightMars = itemWeight * 0.38;

  // Outputting the result to the console
  std::cout << "The weight of your item on Mars would be " << itemWeightMars << " kilos." << "\n";
  
}