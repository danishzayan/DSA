#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r) {
    int num = factorial(n);
    int dem = factorial(r) * factorial(n-r);
    return num/dem;
}

int main() {
    int n, r;
    cout << "ncr number: ";
    cin >> n >> r;
    cout << "ans is " << nCr(n,r);

}