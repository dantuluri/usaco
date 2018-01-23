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

bool collide(Rect p, Rect q)
{
  int x_overlap = max(0, min(p.x2, q.x2) - max(p.x1, q.x1));
  int y_overlap = max(0, min(p.y2, q.y2) - max(p.y1, q.y1));
  if( x_overlap * y_overlap>0)
  {
  	//cout<<"collide true"<<"\n";
  	return true;
  }
  else
  {
  	//cout<<"coll false"<<"\n";
  	return false;
  }

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
	//cout<<"\n\na x2 "<<a.x2<<"\n";
	//cout<<"\n\nb x2 "<<b.x2<<"\n";
	if(a.x1<b.x1&&a.x2>b.x1&&a.x2<=b.x2&&a.y1>=b.y1&&a.y2<=b.y2)
	{
	//    2    5.    7.   5.    7.    10. ..  2.    5.    7.    10.  1.   10
		//cout<<"we return true: "<<"\n";
		return true;
	}

	else if(a.x1>=b.x1&&a.x2>b.x2&&a.x1<b.x2&&a.y1>=b.y1&&a.y2<=b.y2)
	{
				return true;
				//cout<<"aosidjaosd: "<<"\n";
	}
	return false; 
}


int main(void)
{
  ifstream fin ("billboard.in");
  ofstream fout ("billboard.out");

  Rect a, b;

  fin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
  fin >> b.x1 >> b.y1 >> b.x2 >> b.y2;


  //check if they collide at all

  //check b eats a
  	//only can happen when a.y1 and a.y2 is between b.y1 and b.y2
  	//check if a is completely covered

  //check if b eats a

  //a would need all

//cout<<"AREA"<<area(a)<<" "<<area(b)<<"\n";

  if(collide(a,b)&&beatA(a,b))
  {
  		fout<<(area(a)-intersect_area(a,b));
  		//answer would be area(a)-intersecting area
  }
  else
  {
  	// fout<<"NULL";
  	  fout<<area(a);
  }
  return 0;
}














