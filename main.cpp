/*
This program is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program. If not, see <https://www.gnu.org/licenses/>.
*/

#include <cmath> // This is for exponentiatioin and square root functions
#include <iostream>

int main() {
  int num1, num2;
  char oper;

  // Outputing the welcoming message
  std::cout << "Welcome to Arad's Shitty Calculator." << std::endl;
  std::cout << "The possible operations are: \n Addition (+) \n Subtraction "
               "(-) \n Multiplication (*) \n Division (/) \n Exponentiaion "
               "(^) \n Square Root (v) \n Type (xx) to exit";
  while (true) {
    std::cout << std::endl;
    std::cout << "|>> "; // A kool prompt to type ur problems in
    std::cin >> num1 >> oper; // Recieving input for the 1st number and the operand

    if (std::cin.fail()) { // The fail mechanism to break out of the loop and exit the app
      std::cin.clear();
      break;
    } else if (oper == 'v') { // I chose "v" for square root cuz it looks like a square root sign
      std::cout << "Square root of " << num1 << " is equals to " << sqrt(num1);
      continue; 
    }

    std::cin >> num2; // Recieving input for other operations than quare root
                      // (Where you need more than 1 number)

    // Checking wherether what operator was used and do the responsible calculation
    if (oper == '+') {
      std::cout << num1 << " + " << num2 << " = " << (num1 + num2);
    } else if (oper == '-') {
      std::cout << num1 << " - " << num2 << " = " << (num1 - num2);
    } else if (oper == '*') {
      std::cout << num1 << " * " << num2 << " = " << (num1 * num2);
    } else if (oper == '/') {
      float division = num2; // Converting to float so it can divide properly
      std::cout << num1 << " / " << num2 << " = " << (num1 / division);
    } else if (oper == '^') {
      std::cout << num1 << " ^ " << num2 << " = " << (pow(num1, num2));
    } else {
      std::cout << "Unknown operation. \n"
                   "Use one of there operations: + - * / ^ v" << std::endl;
    };
  }
  return 0;
}
