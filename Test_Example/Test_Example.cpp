#include<iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;
    cout << "Enter number= ";
    cin >> num;

    for (int i = num; i <= 500; i++) {
        sum += i;
    }
    cout << "result is " << sum << endl;

    return 0;
}