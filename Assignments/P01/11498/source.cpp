//Arshia Clare
//Aug 31, 2020
//11498

#include <iostream>

using namespace std;

int main() {
  int K, N, M, X, Y;
  cin>>K;
  while(K != 0){
     cin>>N>>M;
     for(int i = 0; i < K; i++){
       cin>>X>>Y;
       if(N<X){
         if(M<Y){
           cout<<"NE"<<endl;
         }else if(M>Y){
           cout<<"SE"<<endl;
         }else{
          cout<<"divisa"<<endl;
         }
       }else if(N>X){
         if(M>Y){
           cout<<"SO"<<endl;
         }else if(M<Y){
           cout<<"NO"<<endl;
         }else{
           cout<<"divisa"<<endl;
         }
       }else{
         cout<<"divisa"<<endl;
       }
     }
    cin>>K;
  }
}
