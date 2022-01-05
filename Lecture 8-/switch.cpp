#include <iostream>
using namespace std;

int main() {

    int num = 2;
    cout << endl;

    switch(num) {
        case 1:
          cout << "First no"<<endl;
          break;
        case 2:
          cout << "Second no" << endl;
          break;
        default:
          cout << "this default value" <<endl;
    }
    
}