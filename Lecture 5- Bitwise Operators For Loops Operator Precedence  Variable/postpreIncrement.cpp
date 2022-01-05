#include <iostream>
using namespace std;
int main() {
    int i=3, a=2, sum;
    // sum = a + (i++);
    // cout << sum << endl;
    // cout << i;


    sum = a + (i++);
    cout << sum << endl;
    cout << i;

    return 0;
}