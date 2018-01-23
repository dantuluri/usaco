bool masked(Rect a, Rect b)
{
	//return 0 if b is b completely mask a then no tarp needed
	if(b.x1<=a.x1&&b.x2>=a.x2&&b.y1<=a.y1&&b.y2>=a.y2)
		return false;
	//return 1 if a needs to be covered completely
	else if(a.x1<=b.x1&&a.x2>=b.x2&&a.y1<=b.y1&&a.y2>=b.y2)
		return true;
}

bool partialCover(Rect a, Rect b)
{
  int x_overlap = max(0, min(a.x2, b.x2) - max(a.x1, b.x1));
  int y_overlap = max(0, min(a.y2, b.y2) - max(a.y1, b.y1));
  if(x_overlap * y_overlap>0)
  	return true;
  else
  return false;
}
bool cornerCase(Rect a, Rect b)
{
	//right side
	// if(b.x1<a.x1&&b.x2>a.x1&&b.x2<a.x2&&b.y1<)
	// if(b.x1<a.x2&&b.x1>a.x1&&)
}

{
  int x_overlap = max(0, min(p.x2, q.x2) - max(p.x1, q.x1));
  int y_overlap = max(0, min(p.y2, q.y2) - max(p.y1, q.y1));
  return x_overlap * y_overlap;
}
