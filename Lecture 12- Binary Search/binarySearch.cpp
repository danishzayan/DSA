#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
  int start = 0;
  int end = size - 1;

  int mid = start + (end - start)/2;

  while(start <= end) {

    if(arr[mid] == key) {
      return mid;
    }

    if(key > arr[mid]) {
      start = mid + 1;
    }

    else{
      end = mid - 1;
    }

    mid = start + (end - start)/2;
  }
  return -1;
}

int main() {

  int even[3] = {2,4,6};
  int add[5] = {1,3,7,9,13};

  int evenIndex = binarySearch(even, 3, 6);
  cout << "index of 6 is: " << evenIndex <<endl;

  int addIndex = binarySearch(add, 5, 13);
  cout << "index of 13 is: " << addIndex <<endl;

  return 0; 
}