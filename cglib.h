#ifndef CGLIB_H
#define CGLIB_H

#include <stdio.h>

// 2D point
typedef struct 
{
	int x,y;
} Point;

void p_Point(Point &s);
// Toleft test
bool toleft(Point a,Point b, Point c);
// 平面的一个面积三维空间中的行列式 叉乘公式怎么推导出来的？
int Area(Point a,Point b,Point c);

#endif