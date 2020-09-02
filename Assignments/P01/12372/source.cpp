//Arshia Clare
//Aug 31, 2020
//12372

#include <iostream>
using namespace std;

int main() {
  int T,L,W,H;
  string fit;
  cin>>T;
  for(int i=0;i<T;i++){
    cin>>L>>W>>H;
    if(L<0 || W<0 || H<0){
      fit = "bad";
    }
    else if(L>20 || W>20 || H>20){
      fit = "bad";
    } else{
      fit = "good";
    }
    cout<<"Case "<< i+1 << ": "<<fit<< endl;
  }
}
