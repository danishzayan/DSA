#include <iostream>
using namespace std;

int sumofNum(int a) {
    int sum = 0;
    for(int i = 1; i<=a; i++){
        sum = sum + 1;
    }
    cout << "1+2+3 " << sum;
}

int sumofNum()
int main() {
    int n;
    cout << "enter two no: ";
    cin >> n;
    sumofNum(n);
}
