#include <bit>
#include <iostream>
using namespace std;
void bubbleSort(int array[], int n) {
  bool wasSwapped;
  for (int i = 0; i < n - 1; i++) {
    wasSwapped = false;
    for (int j = 0; j < n; j++) {
      if (array[j] > array[j + 1]) {
        swap(array[j], array[j + 1]);
        wasSwapped = true;
      }
    }
    if (wasSwapped = false) break;
  }
}
void printResult(int array[], int n) {
  int i;
  cout << "[";
  for (i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
  cout << "]\n";
}
int main() {
  int size = 0, data;
  cout << "Please enter the size of your array.\n";
  cin >> size;
  int array[size];
  for (int i = 0; i < size; i++) {
    cout << "Please enter your data point: ";
    cin >> data;
    array[i] = data;
  }
  cout << "Your starting array is ";
  printResult(array, size);
  bubbleSort(array, size);
  cout << "Your selection sorted array: \n";
  printResult(array, size);
}