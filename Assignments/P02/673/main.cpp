#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() 
{
  int n,d;
  d=0;
  string str, S;
  string ans = "Yes";
  stack <char> c;
  cin>>n;
  getline(cin,S);
  getline(cin,S);
  for(int i=0;i<n;i++)
  {
    //cout<<str<<endl;
    for(int w = 0; w < S.length(); w++){
      if(S[w] != ' '){
        str = str+ S[w];
      }
    }
    //cout<<str<<endl;
    //empty string
    if(str.length() == 0)
    {
      cout<<ans<<endl;
    }
    //length is odd then there's no balance
    else if(str.length()%2 != 0)
    {
       ans = "No";
       cout<<ans<<endl;
    }
    else if(str.length()%2 == 0)
    {
      for(int i = 0; i < str.length(); i++)
      {
        if(ans == "Yes")
        {
          if(str.at(i) == '(' || str.at(i) == '[')
          {
            c.push(str.at(i));
          }
          else if(str.at(i) == ')')
          {
            if(!c.empty())
            {
              if(c.top() == '(')
              {
                c.pop();
              }else
              {
                ans= "No";
              }
            }
            else if(c.empty())
            {
              ans = "No";
            }
          } 
          else if(str.at(i) == ']')
          {
            if(!c.empty())
            {
              if(c.top() == '[')
              {
                c.pop();
              }else{
                ans= "No";
              }
            }else{ans = "No";}
          }
        }
      }
      if(!c.empty()){
        ans = "No";
      }
      cout<<ans<<endl;
    }
    while(!c.empty()){
      c.pop();
    }
    getline(cin,S);
    ans="Yes";
    str="";
  }
}
