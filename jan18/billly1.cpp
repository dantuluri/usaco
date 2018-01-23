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

bool collide(Rect a, Rect b)
{
  
  if()
  	return true;
  else
  	return false;

}

int intersect_area(Rect p, Rect q)
{
  int x_overlap = max(0, min(p.x2, q.x2) - max(p.x1, q.x1));
  int y_overlap = max(0, min(p.y2, q.y2) - max(p.y1, q.y1));
  return x_overlap * y_overlap;
}

bool overlap(Rect a, Rect b)
{
	if(b.x1<=a.x1&&b.x2>=a.x2&&b.y1<=a.y1&&b.y2>=a.y2)
		return true;
	return false;
}

bool beatA(Rect a, Rect b)
{
	//a.x1 or a.x2 has to be outside of b.x1 or b.x2
	if(a.x1<b.x1&&a.x2>b.x1&&a.x2<=b.x2||a.x1>=b.x1&&a.x2>b.x2&&a.x1<b.x2)
		return true;
	return false; 
}


int main(void)
{
  ifstream fin ("billboard.in");
  ofstream fout ("billboard.out");
  Rect a, b;
  fin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
  fin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
  int x_overlap = max(0, min(p.x2, q.x2) - max(p.x1, q.x1));
  int y_overlap = max(0, min(p.y2, q.y2) - max(p.y1, q.y1));
  if(x_overlap * y_overlap>0&&b.x2>=&&b.y1<=a.y1a.x2&&b.x1<=a.x1&&b.y2>=a.y2)
  {
    //CHecking if A is going to be reduced
    if(a.x1<b.x1&&a.x2>b.x1&&a.x2<=b.x2||a.x1>=b.x1&&a.x2>b.x2&&a.x1<b.x2)
      fout<<area(a)-intersect_area(a,b);
  }
  //If B doesn't cover all needs to be covered
  else fout<< area(a);
}