#include <iostream>

using namespace std;

/**
 * Create a function that decides if there is a bigger or equal number than a given number
 * in an array
 * It should take the array, it's length and a number as a parameter, then return a boolean
 */

bool isBigger (int array[], int size, int number) {

  bool bigger = false;
  for (int i = 0; i < size; i++) {
    if (array[i] >= number) {
      bigger = true;
    }
  }
  return bigger;
}

int main() {
  int array[] = {3, 2, 4, 6, -1};
  int size;
  int number;
  size = sizeof(array) / sizeof(int);
  cout << "Please enter your number!" << endl;
  cin >> number;
  if (isBigger(array, size, number) == false) {
    cout << "There is no bigger or equal number in the array with your number.";
  } else {
    cout << "There is a bigger or equal number in the array with your number.";
  }
  return 0;
}
