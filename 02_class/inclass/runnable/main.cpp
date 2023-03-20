#include <iostream>

using namespace std;

void my_runnable(){ // Runnable
    cout << "Hello from the function" << endl;
}

void my_consumer(int x, int y){ // consumer
    int z = 9;
    cout << x + y + z << endl;
}

int my_producer(){
    return 5 + 5;
}

int my_function(int x){
    return 5 + x;
}

int main(){
    my_runnable();
    my_consumer(2, 2);
    cout << my_producer() << endl;
    cout << my_function(7) << endl;
}
