#ifndef CGLIB_CPP
#define CGLIB_CPP

#include "cglib.h"

// typedef bool int;
void p_Point(Point &s){
	printf("(%d,%d)\n",s.x,s.y);
}


bool toleft(Point a,Point b, Point c){
	return Area(a,b,c) > 0;
}

int Area(Point a,Point b,Point c){
	return a.x*b.y + a.y*c.x+b.x*c.y
		- a.x*c.y - a.y*b.x - b.y*c.x;
}


#endif


#ifndef debug_this

int main(int argc, char const *argv[])
{
	Point p ={1,1},q = {1,0},s = {0,0} ;
	// Area();b
	p_Point(p);
	p_Point(q);
	p_Point(s);

	printf("%d\n",Area(s,p,q));
	printf("%d\n",toleft(s,p,q));
	printf("%bool\n",toleft(s,q,p));
	return 0;
}
#endif
