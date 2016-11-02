#include <iostream>

using namespace std;

/**
 * Create a function that takes a pointer to a float and a float, then it should
 * multiply the value of the pointer with the given float and save the result
 * where the pointer points.
 * Please mutliply the total variable by 5 with it.
 */

void multiply(float number, float* multi) {
  *multi *= number;
}

int main() {
  float total = 123;
  float base = 5;

  multiply(base, &total);

  cout << total;

  return 0;
}
