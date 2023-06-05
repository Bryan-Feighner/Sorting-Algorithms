#include <bit>
#include <iostream>
#include <random>
using namespace std;

bool checkSort(int array[], int n) {
  while (--n > 1)
    if (array[n] < array[n - 1]) return false;
  return true;
}

void bogoSortShuffle(int array[], int n) {
  for (int i = 0; i < n; i++) {
    swap(array[i], array[rand() % n]);
  }
}

void bogoSortCheck(int array[], int n) {
  while (!checkSort(array, n)) {
    bogoSortShuffle(array, n);
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
  bogoSortCheck(array, size);
  cout << "Your selection sorted array: \n";
  printResult(array, size);
}
