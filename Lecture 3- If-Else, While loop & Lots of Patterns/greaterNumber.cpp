#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter number: " << endl;;
    cin >> a ;
    cout << "Enter se number: " <<endl;
    cin >> b;

    if(a > b){
        cout << "a is greater no";
    }
    if(b>a){ 
        cout << "b is greater no";
    }
    return 0;
}