#include <iostream>
using namespace std;

int main() {

    int amount;
    int n100,n50,n20,n10,n1;
        n100=n50=n20=n10=n1=0;
    cout << "Enter amount" <<endl;
    cin >> amount;

    switch(amount >= 100) {
        case true:
              n100 = amount /100;
              amount = amount - n100 *100;
              break;
    }
    switch(amount >= 50) {
        case true:
              n50 = amount /50;
              amount = amount - n50 *50;
              break;
    }
   cout << "note of 100: " << n100<< endl;
   cout << "note of 50: " << n50<< endl;
}