#include <cmath>
#include <iostream>
#include <vector>

#define EPS 1e-9
#define PI acos(-1.0)
using namespace std;
struct point {
  double x, y;
  point() { x = y = 0.0; }                      // default constructor
  point(double _x, double _y) : x(_x), y(_y) {} // user-defined
};

double area(const vector<point> P) {
  double result = 0;
  double x1, y1, x2, y2;
  for (int i = 0; i < P.size() - 1; i++) {
    x1 = P[i].x;
    x2 = P[i + 1].x;
    y1 = P[i].y;
    y2 = P[i + 1].y;
    result += (x1 * y2 - x2 * y1);
  }
  x1 = P[P.size()-1].x;
  y1 = P[P.size()-1].y;
  x2 = P[0].x;
  y2 = P[0].y;
  result += (x1 * y2 - x2 * y1);
  result = fabs(result) / 2;
  return result;
}

int main() {
  int N, found;
  double x1,y1,MT,MR,t;
  double a = 0.0;
  double at = 0.0;
  vector<point> v;
  cin >> N;
  while(N != 0){
  //read in input
    for(int i = 0; i < N; i++){
      cin >> t;
      cin>>x1>>y1;
      v.push_back(point(x1,y1));
      found = 0;
      //if found == 2 then the first coordinate matches the last pair (its a good shape)
      while(found < 2){
        cin >> x1 >> y1;
        v.push_back(point(x1,y1));
        //finding the last pair
        if(v[0].x == v[v.size()-1].x){
          found++;
        }
        if(v[0].y == v[v.size()-1].y){
          found++;
        }
        if(found == 1 || found == 0){
          found = 0;
        }
      }
      v.pop_back();
      //volume
      at = area(v) * t;
      //sum of volumes
      a = a+at;
      v.clear();
    }
    //manhole radius and thickness
    cin >> MR >> MT;
    double bottom_area = PI*(pow(MR,2))*MT;
    int num = a/bottom_area;
    cout<<num<<endl;

    cin >> N;
    a = at = 0.0;
    found = 0;
  }
}
