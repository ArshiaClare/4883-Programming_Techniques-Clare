#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

int main() {
  queue<char> q;
  stack<char> s;
  stack<char> s2;
  queue<char> finalq;

  string str;
  bool Home = false;
  bool End = false;

  while(getline(cin, str)){
    int i=0;
    while(i<str.length()){
      if (str.at(i) == '['){
        Home = true;
      }
      else if (str.at(i) == ']'){
        End = true;
        Home = false;
      }
      if(Home == false && End == false){
        q.push(str.at(i));
      }else if(Home == true && End == false){
        s.push(str.at(i));
      }else if(Home == true && End == true) {
        s.push(str.at(i));
        End = false;
      }
      else{
        q.push(str.at(i));
      }
      i++;
    }
      while(!s.empty()){
        s2.push(s.top());

        if(s.top() == '['){
          s2.pop();
          while(!s2.empty()){
            finalq.push(s2.top());
            s2.pop();
          }
          s.pop();
        }else{
          s.pop();
        }
      }
      while(!q.empty()){
        finalq.push(q.front());
        q.pop();
      }
      while(!finalq.empty()){
        if(finalq.front() == '[' || finalq.front() == ']'){
          finalq.pop();
        }else{
          cout<<finalq.front();
          finalq.pop();
        }
      }
      while(!s2.empty()){
        s2.pop();
      }
      Home = false;
      End = false;
    cout<<endl;
  }
}
