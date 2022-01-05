#include<iostream>
using namespace std;

// 1 -> prime no 
// 0 -> not a prime no 
bool isPrime(int n) {
    // divide hogya to not a prime no 
    for(int i=2; i<n; i++) {
        if(n%i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    cin >> num;
    if(isPrime(num)) {
        cout << "is prime no";
    }
    else{
        cout <<"not prime no";
    }
}