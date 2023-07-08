#include <iostream>
using namespace std;
void merge(int *, int, int, int);
void mergeSort(int *arr, int low, int high) {
  int mid;
  if (low < high) {
    mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, high, mid);
  }
}
void merge(int *arr, int low, int high, int middle) {
  int i, j, k, c[50];
  i = low;
  k = low;
  j = middle + 1;
  while (i <= middle && j <= high) {
    if (arr[i] < arr[j]) {
      c[k] = arr[i];
      k++;
      i++;
    } else {
      c[k] = arr[j];
      k++;
      j++;
    }
  }
  while (i <= middle) {
    c[k] = arr[i];
    k++;
    i++;
  }
  while (j <= high) {
    c[k] = arr[j];
    k++;
    j++;
  }
  for (i = low; i < k; i++) {
    arr[i] = c[i];
  }
}
int main() {
  int myarr[30], num;
  cout << "Enter how many numbers you want to be sorted:";
  cin >> num;
  cout << "Enter " << num << " numbers to be sorted:";
  for (int i = 0; i < num; i++) {
    cin >> myarr[i];
  }
  mergeSort(myarr, 0, num - 1);
  cout << "Sorted array\n";
  for (int i = 0; i < num; i++) {
    cout << myarr[i] << "\t";
  }
}