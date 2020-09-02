//Arshia Clare
//Aug 31, 2020
//12403

#include <iostream>
using namespace std;

int main() {
  int K, T, r, c;
  c = 0;
  string action;
  cin>>T;
  for(int i = 0; i < T; i++){
    cin>>action;
    if(action == "donate"){
      cin>>K;
      c+=K;
    }else if(action == "report"){
      cout << c << endl;
    }
  }
}
