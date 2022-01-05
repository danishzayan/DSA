#include<iostream>
using namespace std;

//function signature
void numCounting(int n) {
    // function body
    for(int i=1; i<=n; i++) {
        cout << i << " ";
    }
}

int main() {
    int n;
    cin >> n;
    // call function
    numCounting(n);
}