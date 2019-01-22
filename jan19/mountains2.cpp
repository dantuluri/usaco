#include <fstream>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
  ifstream cin("mountains.in");
  ofstream cout("mountains.out");
  int N, x, y, a, b, sum, dx, dy;
  double flx, fly;
  vector< pair <int,int> > v; 
  vector< pair <int,int> > t;
  cin>>N;
  while (cin >> a >> b) {
    v.push_back( make_pair(a,b) ); 
  }

    int n = v.size();
    for (int i=0; i<n; i++) 
    { 
      sum = v[i].first+v[i].second;
      sum/=2;
      dx = sum-v[i].first;
      dy = v[i].second-sum;
      // cout<<"dx: "<<dx<<"\n";
      // cout<<"dy: "<<dy<<"\n";
      if(dx<0||dy<0)
        flx = -sqrt(pow(dx,2)+pow(dy,2))/sqrt(2.0);
      else
        flx = sqrt(pow(dx,2)+pow(dy,2))/sqrt(2.0);
      // cout<<"flx: "<<flx<<"\n";

    } 


  // int n = v.size();
  for (int i=0; i<n; i++) 
    { 
        cout << v[i].first << " "
             << v[i].second << endl; 
    } 
}
