#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() 
{
  int n,m,i;
  string ans = "Yes";
  bool action = false;
  stack <int> N;
  stack <int> temp;
  cin>>n;
  while(n != 0)
  {
    int arr[n];
    i=0;
    while(i<n)
    {
      cin>>m;
      if(m!=0)
      {
        arr[i] = m;
        i++;
      }
      else if(m==0){
        cout<<endl;
        cin>>n;
      }
    }
    for(int j = n; j > 0; j--)
    {
      N.push(j);
    }
    for(int g = 0; g< n; g++){
      if(!N.empty() && temp.empty()){
        while(action == false){
          if(arr[g] != N.top()){
            temp.push(N.top());
            N.pop();
            action =false;
          }
          else if(arr[g] == N.top()){
            N.pop();
            action = true;
          }
        }
      }
      else if(!N.empty() && !temp.empty()){
       while(action == false){
          if(arr[g] != N.top() && arr[g] == temp.top()){
            temp.pop();
            action =true;
          }
          else if(arr[g] != N.top() && arr[g] != temp.top()){
            if(arr[g] > N.top()){
              temp.push(N.top());
              N.pop();
              action = false;
            }
            else{
              ans = "No";
              action = true;
            }
          }
          else if(arr[g] == N.top()){
            N.pop();
            action = true;
          }
          else if(arr[g] != N.top()){
            temp.push(N.top());
            N.pop();
          }
        }
      }
      else if(N.empty() && !temp.empty()){
          if(arr[g] == temp.top()){
            temp.pop();
          }
        }
        action = false;
      
    }
    if(N.empty() && temp.empty()){
        ans= "Yes";
    } else{ 
      ans = "No";
      while(!N.empty())
      {
        N.pop();
      }
      while(!temp.empty()){
        temp.pop();
      }
    }
    if(n != 0){
      cout<<ans<<endl;
    }
    action = false;
    ans = "Yes";
  }
  return 0;
}
