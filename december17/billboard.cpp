#include<iostream>
#include <fstream>
using namespace std;
bool overlap(int a[],int b[],int c[], int d[])
{
  //case x
  if((c[0]>a[0]&&c[0]<a[1])||(c[1]>a[0]&&c[1]<a[1])||(a[0]<c[0]&&c[1]<a[1])||(a[0]>c[0]&&a[1]<c[1]))
  return true;
  if((d[0]>b[0]&&d[0]<b[1])||(d[1]>b[0]&&d[1]<b[1])||(b[0]<d[0]&&d[1]<b[1])||(b[0]>d[0]&&b[1]<d[1]))
  return true;
  return false;
}
int calc(int a[],int b[],int c[], int d[])
{
  if((c[0]>a[0]&&c[0]<a[1]))
  {
    int w = a[1]-c[0];
    int l = 0;
    if(b[1]>d[1])
    {
      if(d[0]>b[0])
      l=d[1]-b[0];
      l = d[1]-d[0];
    }
    else
    l = b[1]-d[0];

    return w*l;
  }
  else if((c[1]>a[0]&&c[1]<a[1]))
  {
    int w = c[1]-a[0];
    int l = 0;
    if(b[1]>d[1])
    {
      if(d[0]>b[0])
      l=d[1]-b[0];
      l = d[1]-d[0];
    }
    else
    l = b[1]-d[0];

    return w*l;
  }
  else if((a[0]<c[0]&&c[1]<a[1]))
  {
    int w = c[1]-c[0];
    int l = b[1]-d[0];

    return w*l;
  }
  else if(a[0]>c[0]&&a[1]<c[1])
  {
    int w =a[1]-a[0];
    int l = 0;
    if(b[1]>d[1])
    {
      l = d[1]=d[0];
    }
    else
    l= b[1]-d[0];

    return w*l;
  }
}
int main()
{
  ifstream fin("billboard.in");
  ofstream fout("billboard.out");
  int b1x[2], b1y[2], b2x[2], b2y[2], b3x[2], b3y[2];
  fin>>b1x[0]>>b1y[0]>>b1x[1]>>b1y[1];
  fin>>b2x[0]>>b2y[0]>>b2x[1]>>b2y[1];
  fin>>b3x[0]>>b3y[0]>>b3x[1]>>b3y[1];
  int total = 0;
  int beta = ((b1x[1]-b1x[0])*(b1y[1]-b1y[0]));
  cout<<beta<<" ";
  int beta1 = ((b2x[1]-b2x[0])*(b2y[1]-b2y[0]));
  cout<<beta1<<" ";

  total = total+beta+beta1;
  //also calculate the areas of the current rectangles
  int rect1 = 0;
  int rect2 = 0;
  if(overlap(b1x,b1y,b3x,b3y))
  {
    rect1 = calc(b1x,b1y,b3x,b3y);
    // cout<<"ASDASFEFEW"<<rect1<<" ";

    rect1 = rect1*-1;
  }
  if(overlap(b2x,b2y,b3x,b3y))
  {
    rect2 = calc(b2x,b2y,b3x,b3y);
    // cout<<rect2<<" ";

    rect2 = rect2*-1;
  }
  total = total-(rect1+rect2);
  fout<<total<<"\n";
}
