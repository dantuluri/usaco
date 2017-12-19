#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
  int b1[4];
  int b2[4];
  int b2[4];
  for(int i = 0;i<4;i++)
  {
    cin>>b1[i];
  }
  for(int i = 0;i<4;i++)
  {
    cin>>b2[i];
  }
  for(int i = 0;i<4;i++)
  {
    cin>>b3[i];
  }
  //min
  int minx = min(b1[0],b1[2]);
  minx = min(minx,b2[0]);
  minx = min(minx,b2[2]);
  minx = min(minx,b3[0]);
  minx = min(minx,b3[2]);
  int miny = min(b1[1],b1[3]]);
  miny = min(miny,b2[1]);
  miny = min(miny,b2[3]);
  miny = min(miny,b3[1]);
  miny = min(miny,b3[3]);
  //max
  int maxx = max(b1[0],b1[2]);
  minx = max(minx,b2[0]);
  minx = max(minx,b2[2]);
  minx = max(minx,b3[0]);
  minx = max(minx,b3[2]);
  int maxy = max(b1[1],b1[3]]);
  miny = max(miny,b2[1]);
  miny = max(miny,b2[3]);
  miny = max(miny,b3[1]);
  miny = max(miny,b3[3]);


  int big [maxy-miny][maxx-minx];
  int xd = maxx-minx;
  int yd = maxy-miny;
  for(int i = 0;i<yd;i++)
  {
    for(int j = 0;j<xd;j++)
    {
      if(j>=b1[0]&&j<=b1[2])&&(i>=b1[1]&&i<=b1[3])
      else if(j<=b1[0]&&j>=b1[3])
    }
  }
}
