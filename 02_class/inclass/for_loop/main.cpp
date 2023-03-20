#include <iostream>

using namespace std;

int main(){
    string ui {"hello"};
    for (int i = 0; i < 10000000; i++)
    cout << "'" << ui[i] << "'" << endl;

    // for(int counter = 0; counter < 10; counter++){
    //      cout << "Letter: " << ui[counter] << endl;
    // }

  
}