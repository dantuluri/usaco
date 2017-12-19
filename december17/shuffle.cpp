#include<iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream fin("shuffle.in");
ofstream fout("shuffle.out");
  int n;
  fin>>n;
  int master[n];
  int output[n];
  int temp[n];
  int temp2[n];
  int temp3[n];
  int temp4[n];
  int temp5[n];
  int temp6[n];
  for (int i = 0; i < n; i++) {
    master[i] = 0;
    output[i] = 0;
    temp[i] = i;
    temp2[i] = 0;
    temp3[i] = 0;
    temp4[i] = 0;
    temp5[i] = 0;
    temp6[i] = 0;
  }
  for (int i = 0; i < n; i++) {
    fin>>master[i];
  }
  for (int i = 0; i < n; i++) {
    fin>>output[i];
  }

for (int j = 0; j < n; j++) {
temp2[master[j]-1] = temp[j];
}

for (int j = 0; j < n; j++) {
temp3[master[j]-1] = temp2[j];
}
for (int j = 0; j < n; j++) {
temp4[master[j]-1] = temp3[j];
}


for (int abc = 0; abc < n; abc++) {
  for(int j = 0;j<n;j++)
  {
    if(abc==temp4[j])
    fout<<output[j]<<"\n";
  }
}









}
