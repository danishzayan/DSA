#include<iostream>
using namespace std;
int main() {
    int n, sum = 0, i = 2;
    cout << "Enter n number: ";
    cin >> n;
    while(i<=n){
            sum = sum + 1;
            i = i + 2;
    }
        cout << "sum of 2+4+6...n = " << sum <<endl;
    return 0;
}