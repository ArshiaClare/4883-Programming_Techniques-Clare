#include <iostream>
#include <iomanip>
#include <map>

using namespace std;
int main() {
  int n;
  int count = 0;
  string name;
  bool next = false;

  cin >> n;

  getline(cin,name);
  getline(cin,name);

  while(n > 0){
    map<string,int> trees;
    while(next == false && getline(cin,name)){
      if(name == ""){
        next = true;
      }
      else{
        trees[name]++;
        count++;
      }
    }

    for(map<string,int>::iterator it = trees.begin(); it != trees.end(); it++){
      cout<< it->first << " " << fixed << setprecision(4) << (it->second*100.0)/count << endl;
    }
    if(n>1)
      cout<<endl;
    count = 0;
    next = false;
    n--;
  }
}
