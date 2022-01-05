#include <iostream>
using namespace std;

bool isEven(int a) {
    //add number
    if(a&1) {
        return 0;
    }
    //even number
    else {
        return 1;
    }
}

int main() {
    int num;
    cin >> num;
    if(isEven(num)) {
        cout << "Number is even" << endl;
    }
    else{
        cout << "Number is odd" << endl;
    }
}