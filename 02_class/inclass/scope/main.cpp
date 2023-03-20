#include <iostream>

using namespace std;

void my_function(int x){
    x = x + 5;
    //return x;
}


int main(){
    int x = 10;
    my_function(x);
    cout << x << endl;
}