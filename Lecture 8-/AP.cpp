#include<iostream>
using namespace std;

// AP = ( 3*n + 7 ) 
// i/p = 3
// o/p nth term = 3*3 + 7 = 16

void ap(int n) {
    int nth = 3*n+7;
    cout << n <<" 's nth number is " <<nth;
} 
int main() {
    int num;
    cin >> num;
    ap(num);
}
