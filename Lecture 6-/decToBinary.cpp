#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int decNumber, ans=0, bit;

    cout <<"Enter Decimal No: " << endl;
    cin >> decNumber;
    
    int i = 0;
    while (decNumber != 0)
    {
        bit = decNumber & 1;

        ans = (bit * pow(10, i)) + ans;

        decNumber = (decNumber >> 1);
        i++;
    }
    
    cout << "Binary No is: " << ans <<" " <<endl;
    
}