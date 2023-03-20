#include <iostream>
#include <string>

using namespace std;

int main(){
    string ui {};
    while (true) {
        cout << "Welcome to my awesome application:" << endl;
        cout << "c - calculate" << endl;
        cout << "e - echo" << endl;
        cout << "q - quit" << endl;
        getline(cin, ui);
        if(ui == "c"){
            string str_num1, str_num2;
            int num1 {}, num2 {};
            cout << "Type in a number: ";
            getline(cin, str_num1);
            cout << "Type in a number: ";
            getline(cin, str_num2);
            num1 = stoi(str_num1);
            num2 = stoi(str_num2);
            cout << num1 + num2 << endl;
        }
        else if(ui == "e"){
            string v {};
            getline(cin, v);
            cout << v << endl;
        }
        else if(ui == "q"){
            break;
        }
        else{
            cout << "The value \""+ui+"\" is not recognized" << endl;
        }
    }
}
