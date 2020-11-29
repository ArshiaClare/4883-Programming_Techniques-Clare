#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

vector<pair<float,float>> sort_X(vector<pair<float,float>> v){
  sort(v.rbegin(),v.rend());
  return v;
}

double cal(vector<pair<float,float>> v){
  float maxY = v[0].second;
  double sq= 0;
  for(float i = 1; i < v.size(); i++){
    if(maxY < v[i].second)
    {
      sq += (sqrt(pow((v[i].second-v[i-1].second),2)+pow((v[i].first-v[i-1].first),2)) * ((v[i].second - maxY)/(v[i].second - v[i-1].second)));
      maxY = v[i].second;
    }
  }
  return sq;
}

int main() {
  pair<float,float> p;
  vector<pair<float,float>> v;
  float C,N;
  float x,y;
  cin>>C;
  for(float i = 0; i < C; i++){
    cin>>N;
    for(float j = 0; j < N; j++){
      cin >> p.first >> p.second;
      v.push_back(p);
    }
    v = sort_X(v);
    cout << fixed << setprecision(2) <<cal(v);
    cout<<endl;
    while(!v.empty()){
      v.pop_back();
    }
  }
}
