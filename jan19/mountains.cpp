#include <fstream>
#include <iostream>
#include <vector>
#include <cmath>
#define ROT 0.7853981633974483
using namespace std;

int main()
{
  ifstream cin("mountains.in");
  ofstream cout("mountains.out");
  int N, a, b, sum, dx, dy, i, j;
  double x, y, flx, fly;
  vector< pair <double,double> > v; 
  vector< pair <double,double> > t;
  cin>>N;
  while (cin >> a >> b) {
    v.push_back( make_pair(a,b) ); 
  }

  int n = v.size();
  for (int i=0; i<n; i++) 
    t.push_back( make_pair(v[i].first*ROT+v[i].second*ROT,v[i].second*ROT-v[i].first*ROT) ); 

  n = t.size();
  // cout<<"size "<<n<<"\n";
  for(int i=0;i<n;i++)
  {

    for(int j=0;j<i;j++)
    {
      // cout<<"loop"<<"\n";
      // cout<<"fi: "<<t[i].first<<"\n";
      // cout<<"fj: "<<t[j].first<<"\n";
      // cout<<"i: "<<t[i].second<<"\n";
      // cout<<"j: "<<t[j].second<<"\n";
      if((t[i].first<t[j].first)&&(t[i].second<t[j].second))
      {
        t.erase(t.begin() + i);
      }
    }
  }


  // cout<<"done"<<"\n";
  n = t.size();
  // for (int i=0; i<n; i++) 
  // { 
  //   cout << t[i].first << " "
  //   << t[i].second << endl; 
  // } 
  cout<<n;
}
