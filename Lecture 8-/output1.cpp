#include <iostream>
using namespace std;

void update(int a) {
    a = a/2;
    // cout << a;
}
int main() {
    int a = 10;
    update(a);
    cout << a ; // output 10
}