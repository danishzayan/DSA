#include <iostream>
using namespace std;

int main() {

    int num, digit, ans = 0;
    cout << "Enter number for reverse: " << endl;
    cin >> num;
    
    while( num != 0) {

        digit = num % 10;

        if((ans > INT_MAX/10) || (ans < INT_MIN/10)) {
            return 0;
        }
        
        ans = (ans * 10) + digit;
        num = num / 10;
        
    }
    cout << "Number reverse is: " << ans << endl;

    return 0;
}