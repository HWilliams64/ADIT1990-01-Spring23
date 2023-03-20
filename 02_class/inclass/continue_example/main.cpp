#include <iostream>

using namespace std;

int main(){
  int count {0};  
  while(count < 100){
    count += 1;
    if (count < 50){
        continue;
    }
    cout << count << endl;
  }
  return 0;
}