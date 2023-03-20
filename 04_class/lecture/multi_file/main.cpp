#include <iostream>
#include "add.h"

using namespace std;

int main() {
    int num1 = 10;
    int num2 = 20;
    int sum = add(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
    return 0;
}