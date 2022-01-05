#include <iostream>
using namespace std;

bool search(int arr[], int size, int key) {
    
    for(int i =0; i<size; i++) {
        if(arr[i] == key) {
            return 1;
        }
    }
    return 0;
}

int main() {

    int arr[10] = {1, 5, 3, 7, 10 , 13, 22, 2, -1, 30};
    
    cout << "Enter element for search: ";
    int key;
    cin >> key;

    bool found = search(arr, 10, key);
    if(found) {
        cout << "Element is present";
    }
    else{
        cout << "Element is not present";
    }
}