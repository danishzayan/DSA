#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout <<"Enter two no: " << endl;
    cin >> a >> b;

    char op;
    cout << "Enter operator: ";
    cin >> op;
    switch(op) {
        case '+': cout << (a+b);
        break;
        case '-': cout << (a-b);
        break;
        case '*': cout << (a*b);
        break;
        case '/': cout << (a/b);
        break;
        case '%': cout << (a%b);
        break;
        default: cout <<"enter valid operation" <<endl;
    }
}