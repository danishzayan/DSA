#include<iostream>
using namespace std;

int oneBits(int n) {
    int count = 0;
    while (n!=0)
    {
        if (n&1)
        {
            count++;
        }
        n = n>>1;
    }
    return count;
}
int main() {
    int num;
    cin >> num;
    cout << oneBits(num);
}