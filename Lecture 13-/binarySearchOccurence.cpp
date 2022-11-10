#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key) {
  int start = 0, end = size - 1;
  int mid = start + (end - start)/2;
  int ans = -1;

  while(start<=end) {
    if(arr[mid] == key) {
      ans = mid;
      end = mid - 1;
    }

    else if(key > arr[mid]) {
      start = mid + 1;
    }

    else if(key < arr[mid]) {
      end = mid - 1;
    }

    mid = start + (end - start)/2;
  }
  return ans;
}

int lastOcc(int arr[], int size, int key) {
  int start = 0, end = size - 1;
  int mid = start + (end - start)/2;
  int ans = -1;

  while(start<=end) {
    if(arr[mid] == key) {
      ans = mid;
      start = mid + 1;
    }

    else if(key > arr[mid]) {
      start = mid + 1;
    }

    else if(key < arr[mid]) {
      end = mid - 1;
    }

    mid = start + (end - start)/2;
  }
  return ans;
}

int main() {
  int even[10] = {2,4,6,6,8,8,8,8,8,9};
  cout << "First occurence of 8 is " << firstOcc(even, 10, 8) << endl;
  cout << "Last occurence of 8 is " << lastOcc(even, 10, 8) << endl;
  return 0;
}