#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  ifstream cin("folding.in");
  ofstream cout("folding.out");
  int N, L, x;
  vector<int> v;
  cin>>N>>L;
  while (cin >> x) {
    v.push_back(x); 
  }
  sort(v.begin(), v.end()); 


  for(int i = 1;i<v.size()-1;i++)
  {
    cout<<v.at(i)<<"\n";
  }




  cout<<"Printing"<<"\n";
  for (int x : v) 
        cout << x << " "; 

}
