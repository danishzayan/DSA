#include<iostream>
using namespace std;

int main() {

    // arrya declare 
    int number[15];
    // accesing an array 
    cout << "Value at 14 index: " << number[13] <<endl; // output: garbage value


    // initializing an array 
    int first[5] = {2,4,8,5};
    // accesing an element 
    cout <<"Value of index 2 : " << first[2] <<endl;  //output: value of index 2 : 8


    int second[15] = {3,5};
    int n = 15; //or n = 2
    // printing or accessing the all element 
    for(int i=0; i<n; i++) {
        cout << second[i] << " ";
    }


    int thirt[10] = {0};
    int m = 10;
    cout <<endl;
    // printing or accessing the all element 
    for(int i=0; i<m; i++) {
        cout << thirt[i] << " ";
    }


    
}