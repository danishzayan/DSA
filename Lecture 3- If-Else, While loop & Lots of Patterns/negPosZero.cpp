#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter a no: " << endl;
    cin >> a;
    if(a == 0){
        cout << "No is Zero" << endl;
    }else if(a > 0){
        cout << "this postive no" << endl;
    }else{
        cout << "this is negative no" << endl;
    }
    return 0;
}