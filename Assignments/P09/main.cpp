#include <iostream>
#include <vector>
#include <sstream>
#include <queue>
#include <algorithm>

using namespace std;

struct little_black_book{
  string firstname;
  string lastname;
  string address;
  string department;
  string home_phone;
  string work_phone;
  string campus_box;
};

int main(){
  int num;
  string department;
  string info;
  cin>>num;
  cin.ignore();
  queue<int> sorted;
  vector<little_black_book> book_entry;
  vector<string> alpha;
  while(num > 0){
    getline(cin,department);
    while(getline(cin,info)){
      if(info.empty()){
        break;
      }
      else{
        vector<string> v; 
        struct little_black_book b;
        stringstream ss(info);
        while(ss.good()){
          string substr;
          getline(ss,substr,',');
          v.push_back(substr);
        }
        b.firstname = v[0] + " " + v[1];
        b.lastname = v[2];
        b.address = v[3];
        b.department = department;
        b.home_phone = v[4];
        b.work_phone = v[5];
        b.campus_box = v[6];
        book_entry.push_back(b);
      }
    }
    num--;
  }
  for(int i = 0; i < book_entry.size(); i++){
    alpha.push_back(book_entry[i].lastname);
  }
  sort(alpha.begin(),alpha.end());
  for(int t = 0; t<alpha.size();t++){
    for(int g = 0; g < book_entry.size(); g++){
      if(alpha[t] == book_entry[g].lastname){
        cout<<"----------------------------------------\n";
        cout<< book_entry[g].firstname << " " << book_entry[g].lastname<<endl;
        cout<<book_entry[g].address<<endl;
        cout<<"Department: "<<book_entry[g].department<<endl;
        cout<<"Home Phone: "<<book_entry[g].home_phone<<endl;
        cout<<"Work Phone: "<<book_entry[g].work_phone<<endl;
        cout<<"Campus Box: "<<book_entry[g].campus_box<<endl;
      }
    }
  }
}
