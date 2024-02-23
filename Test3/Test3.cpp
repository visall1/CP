#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std;
int main() {
    int number;
    int num;
    srand(time(0));
    number = rand() % 6 + 1;
    cout << number;

}