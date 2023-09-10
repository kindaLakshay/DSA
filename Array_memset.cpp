#include <iostream>
#include <cstring>

int main() {
  int arr[5] = {1, 2, 3, 4, 5};

  // Set all elements of the array to 0.
  memset(arr, 0, sizeof(arr));

  // Print the array.
  for (int i = 0; i < 5; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
