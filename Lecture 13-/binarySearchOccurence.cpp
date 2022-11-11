#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key) {
  int s = 0, e = size - 1;
  int mid = s + (e - s)/2;
  int ans = -1;

  while(s<=e) {
    if(arr[mid] == key) {
      ans = mid;
      e = mid - 1;
    }

    else if(key > arr[mid]) {
      s = mid + 1;
    }

    else if(key < arr[mid]) {
      e = mid - 1;
    }

    mid = s + (e - s)/2;
  }
  return ans;
}

int lastOcc(int arr[], int size, int key) {
  int s = 0, e = size - 1;
  int mid = s + (e - s)/2;
  int ans = -1;

  while(s<=e) {
    if(arr[mid] == key) {
      ans = mid;
      s = mid + 1;
    }

    else if(key > arr[mid]) {
      s = mid + 1;
    }

    else if(key < arr[mid]) {
      e = mid - 1;
    }

    mid = s + (e - s)/2;
  }
  return ans;
}

int main() {
  int even[10] = {2,4,6,6,8,8,8,8,8,9};
  cout << "First occurence of 8 is " << firstOcc(even, 10, 8) << el;
  cout << "Last occurence of 8 is " << lastOcc(even, 10, 8) << el;
  return 0;
}