#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size) {
    for(int i=0; i<size; i+=2) {
        if(i+1 < size) {
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int n) {
    
    for(int i=0; i<n; i++) {
        cout << arr[i] <<" ";  
    }
    cout << endl;
}

int main() {

   int arr[5] = {5,6,8,3,2};
   int brr[6] = {45,64,2,5,3,7};

   swapAlternate(arr,5);
   printArray(arr, 5);

   swapAlternate(brr,6);
   printArray(brr, 6);
}