//Arshia Clare
//Aug 31, 2020

#include <iostream>
using namespace std;

int main() {
  int T, first, second, third, keep;
  cin>>T;
  for(int i=0;i<T;i++){
    cin>>first>>second>>third;
    if(first<second && first<third){
      if(second<third){
        keep=second;
      }else if(second>third){
        keep=third;
      }
    }else if(second<first && second<third){
      if(first<third){
        keep=first;
      }else if(first>third){
        keep=third;
      }
    }else if(third<first && third<second){
      if(first<second){
        keep=first;
      }else if(first>second){
        keep=second;
      }
    }else{
      keep = first;
    }
    cout<<"Case "<<i+1<<": "<<keep<<endl;
  }
}
