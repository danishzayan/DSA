#include <iostream>
using namespace std;

int sumofArray(int num[], int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum = sum + num[i];
    }
    return sum;
}

int main() {

    cout << "Enter size of element ";
    int size;
    cin >> size;

    int arr[100];
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    } 

    int sum = sumofArray(arr, size);
    cout << "sum of all element " << sum;
}