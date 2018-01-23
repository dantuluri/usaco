#include <iostream>
#include <fstream>
using namespace std;
 
struct Rect {
  int x1, y1, x2, y2;
};
 
int area(Rect r)
{
  return (r.x2 - r.x1) * (r.y2 - r.y1);
}

int intersect_area(Rect p, Rect q)
{
  int x_overlap = max(0, min(p.x2, q.x2) - max(p.x1, q.x1));
  int y_overlap = max(0, min(p.y2, q.y2) - max(p.y1, q.y1));
  return x_overlap * y_overlap;
}
int main(void)
{
  ifstream fin ("billboard.in");
  ofstream fout ("billboard.out");
  Rect a, b;
  fin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
  fin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
  int x_overlap = max(0, min(a.x2, b.x2) - max(a.x1, b.x1));
  int y_overlap = max(0, min(a.y2, b.y2) - max(a.y1, b.y1));
  if(b.x1<=a.x1&&b.x2>=a.x2&&b.y1<=a.y1&&b.y2>=a.y2)
    fout<<0;
  else if(x_overlap * y_overlap>0&&a.x2>b.x1&&a.x1<b.x1&&a.y1>=b.y1&&a.y2<=b.y2&&a.x2<=b.x2)
    if(a.y1>=b.y1&&a.x2>b.x2&&a.x1<b.x2&&a.x1>=b.x1&&a.y2<=b.y2)
  {
    //CHecking if A is going to be reduced
    //top bottom area substract intersected left out area
  fout<<(area(a)-intersect_area(a,b));
  }

  //If B doesn't cover all needs to be covered
  else fout<< area(a);
}