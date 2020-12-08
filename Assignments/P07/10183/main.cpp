#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<unsigned long long int> v;

void fib(unsigned long long int A, unsigned long long int B, unsigned long long int POS){
  unsigned long long int a = A;
  unsigned long long int b = B;
  unsigned long long int pos = POS;
  if(pos < 480){
    if(pos == 0){
      v.push_back(a);
      pos++;
      fib(a,b,pos);
    }
    else if (pos == 1){
      v.push_back(b);
      pos++;
      fib(a,b,pos);
    }
    else if (pos > 1){
      unsigned long long int t = a+b;
      v.push_back(t);
      pos++;
      fib(b,t,pos);
    }
  }
}

int main() {
  unsigned long long int a = 0;
  unsigned long long int b = 1;
  unsigned long long int pos = 0;
  fib(a,b,pos);

  unsigned long long int beg, end;
  int i = 0;
  cin>>beg>>end;
  
  while(end != 0 && beg != 0){
    //cout<<beg<<" "<<end<<endl;
    if(beg == 0 && end == 1){
      //cout<< 1 <<endl;
      cin>>beg>>end;
    }
    else{
      while(v[i] <= beg){
        i++;
      }

      int j = i;
      while(v[j] <= end){
        j++;
      }
      // cout<<i<<" "<<j<<endl;
      cout<<j-i<<endl;
      cin>>beg>>end;
      i=0;
      j=0;
    }
  }
}
