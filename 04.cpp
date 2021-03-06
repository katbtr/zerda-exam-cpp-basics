#include <iostream>

using namespace std;

/**
 * Create a function that takes an integer and returns how many divisors it has
 */

int num_divisor(int number) {
  int counter = 0;
  for (int i = 1; i <= number; i++) {
    if (number % i == 0) {
      counter++;
    }
  }
  return counter;
}

int main() {

  int number;
  cout << "Please enter your number!" << endl;
  cin >> number;
  cout << "This number has " << num_divisor(number) << " divisors." << endl;

  return 0;
}
