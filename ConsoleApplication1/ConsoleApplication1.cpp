#include <iostream>
using namespace std;
int main(){

    int k;
    int sum = 0;
    cout << "Enter the number for multiplication table: ";
    cin >> k;
    for (int i = 1; i <= 10; ++i) {
         cout << k << " x " << i << " = " << (k * i) << endl;
    }
     
    return 0;
}