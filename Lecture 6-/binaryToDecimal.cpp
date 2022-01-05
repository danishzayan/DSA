#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int binaryNumber, ans=0; 
    cout <<"Enter Binary No: " << endl;
    cin >> binaryNumber;
    
    int i = 0;
    while (binaryNumber != 0)
    {
        int digit = binaryNumber % 10;

        if(digit == 1) {
        ans = ans + pow(2, i);
        }

        binaryNumber = binaryNumber / 10;
        i++;
    }
    cout << "Decimal No is: " << ans <<endl;  
}