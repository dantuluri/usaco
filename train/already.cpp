
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
// ofstream fout("beads.out");
//   ifstream fin("beads.in");
  string s = "";
  cin>>s;
  string year = "2018";

  s.replace(0,4,year);
  cout << s << endl;
}