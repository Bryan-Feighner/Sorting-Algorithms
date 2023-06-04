#include <bit>
#include <iostream>
using namespace std;

void selectionSort(int array[], int n) {
  int i, j, min;
  for (int i = 0; i < n - 1; i++) {
    min = i;
    for (j = i + 1; j < n; j++) {
      if (array[j] < array[min]) min = j;
    }
    if (min != i) swap(array[min], array[i]);
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
  selectionSort(array, size);
  cout << "Your selection sorted array: \n";
  printResult(array, size);
}
