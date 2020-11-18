#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
  int n,num,c,i;
  string nul;
  c=i=0;
  vector<string> v;
  vector<string> t;
  stack <string> operand;
  
  cin>>n;
  
  getline(cin, nul);
  getline(cin, nul);
  
  while(c < n){
    getline(cin,nul);
    while(nul != ""){
      v.push_back(nul);
      getline(cin,nul);
    }
    for(int j =0; j<v.size();j++){
      if(v[j] == "("){
        operand.push(v[j]);
      }
      else if(v[j] == ")"){
        while(operand.top() != "("){
          t.push_back(operand.top());
          operand.pop();
        }
        if(operand.top() == "("){
          operand.pop();
        }
      }
      else if(v[j] == "/"){
        while(!operand.empty() && (operand.top() == "*" || operand.top() == "/")){
            t.push_back(operand.top());
            operand.pop();
          }
        if(operand.empty() || operand.top() != "*" || operand.top() == "/"){
          operand.push(v[j]);
        } 
      }
      else if(v[j] == "*"){
        while(!operand.empty() && (operand.top() == "/" || operand.top() == "*")){
            t.push_back(operand.top());
            operand.pop();
          }
        if(operand.empty() || operand.top() != "/" || operand.top() == "*"){
          operand.push(v[j]);
        }
      }
      else if(v[j] == "-"){
        while(!operand.empty() && (operand.top() == "/" || operand.top() == "*" || operand.top() == "+" || operand.top() == "-")){
          t.push_back(operand.top());
          operand.pop();
        }
        if(operand.empty() || operand.top() != "/" || operand.top() != "*" || operand.top() != "+" || operand.top() == "-"){
          operand.push(v[j]);
        }
      }
      else if(v[j] == "+"){
        while(!operand.empty() && (operand.top() == "/" || operand.top() == "*" || operand.top() == "-" || operand.top() == "+" )){
          t.push_back(operand.top());
          operand.pop();
        }
        if(operand.empty() || operand.top() != "/" || operand.top() != "*" || operand.top() != "-" || operand.top() == "+"){
          operand.push(v[j]);
        }
      }
      else{
        t.push_back(v[j]);
      }
    }
    while(!operand.empty()){
      t.push_back(operand.top());
      operand.pop();
    }
    for(int j = 0; j < t.size(); j++){
      cout<<t[j];
    }
    if(c<n-1)
      cout << endl << endl;
    else 
      cout << endl;
    if(!v.empty()){
      v.clear();
    }
    t.clear();
 
    c++;
  }
}
