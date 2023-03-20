#include <iostream>
#include <string>

using namespace std;

int main(){
    int max_attempts {2}, attempts {0};
    string password = "password", user_input {};
    // int max_attempts = 3, attempts = 0;
    
    while(password != user_input){
        cout << "Please type your password: ";
        getline(cin, user_input);
        if(password == user_input){
            cout << "Welcome" << endl;
        }
        else if(max_attempts <= attempts){
            cout << "Go away" << endl;
            break;
            cout << "I am below the break statement" << endl;
        }
        attempts += 1;
    }
  
  return 0;
}