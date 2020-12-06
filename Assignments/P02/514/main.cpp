#include <iostream>
#include <stack>
#include <vector>
#include <queue>

using namespace std;

int main() {
  int queuesize, num;
  cin>>queuesize;
  bool ans = true;
  while(queuesize != 0){
    cin>>num;
    while(num !=0){
      queue<int> A_station;
      for(int i = 0; i < queuesize; i++){
        A_station.push(i+1);
      }
      stack<int> station;
      for(int i = 0; i < queuesize; i++){
        // cout<<num<<endl;
        if(station.empty()){
          while(A_station.front() != num){
            station.push(A_station.front());
            A_station.pop();
          }
          if(A_station.front() == num){
            A_station.pop();
          }
        }
        else if(A_station.empty()){
          if(station.top() == num){
            station.pop();
          }
          else{
            ans = false;
          }
        }
        else if(!station.empty() && !A_station.empty()){
          if(num >= A_station.front()){
            while(A_station.front() != num){
              station.push(A_station.front());
              A_station.pop();
            }
            if(A_station.front() == num){
              A_station.pop();
            }
          }
          else if(num <= station.top()){
            if(station.top() == num){
              station.pop();
            }
            else{
              ans = false;
            }
          }
        }
        cin>>num;
      }
      if(ans == false){
        cout<<"No"<<endl;
      }
      else if(ans == true){
        cout<<"Yes"<<endl;
      }
      ans = true;
    }
    cout<<endl;
    cin>>queuesize;
  }
}
