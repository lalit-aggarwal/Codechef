#include <stdio.h>
#include <math.h>
int point[1000][2];
 
int IsPointInBoundingBox(float x1, float y1, float x2, float y2, float px, float py)
{
    float left, top, right, bottom; // Bounding Box For Line Segment
 
    // For Bounding Box
    if(x1 < x2)
    {
        left = x1;
        right = x2;
    }
    else
    {
        left = x2;
        right = x1;
    }
 
    if(y1 < y2)
    {
        top = y1;
        bottom = y2;
    }
    else
    {
        top = y2;
        bottom = y1;
    }
 
    if( (px+0.01) >= left && (px-0.01) <= right && 
            (py+0.01) >= top && (py-0.01) <= bottom )
    {
        return 1;
    }
    else
        return 0;
 
}
 
 
 
int LineSegmentIntersection(float l1x1, float l1y1, float l1x2, float l1y2,
                            float l2x1, float l2y1, float l2x2, float l2y2,
                            float *m1, float *c1, float *m2, float *c2,
                            float* intersection_X, float* intersection_Y)
{
 
    float dx, dy;
 
    dx = l1x2 - l1x1;
    dy = l1y2 - l1y1;
 
    *m1 = dy / dx;
 
    // y = mx + c
    // intercept c = y - mx
    *c1 = l1y1 - *m1 * l1x1; // which is same as y2 - slope * x2
 
    dx = l2x2 - l2x1;
    dy = l2y2 - l2y1;
 
    *m2 = dy / dx;
    // y = mx + c
    // intercept c = y - mx
    *c2 = l2y1 - *m2 * l2x1; // which is same as y2 - slope * x2
 
    if( (*m1 - *m2) == 0)
        return 0;
    else
    {
        *intersection_X = (*c2 - *c1) / (*m1 - *m2);
        *intersection_Y = *m1 * *intersection_X + *c1;
    }
 
    if(IsPointInBoundingBox(l1x1, l1y1, l1x2, l1y2, *intersection_X, *intersection_Y) == 1 && IsPointInBoundingBox(l2x1, l2y1, l2x2, l2y2, *intersection_X, *intersection_Y) == 1)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
	
	int n,q,i=1,temp;
	int a,b,d,count;
	float m1, c1, m2, c2;
    float intersection_X, intersection_Y;
    float ax, ay, bx, by, cx, cy;
    float x, y, px, py;
   	int nCountIntersections = 0;
	scanf("%d %d\n",&n,&q);
	temp=n;
	while(n--)
	{
		scanf("%d %d\n",&point[i][1],&point[i][2]);
		i++;
	}
	while(q--)
	{	
		count=0;
		scanf("%d %d %d\n",&a,&b,&d);
		ax=a+d;ay=b;
		bx=a;by=b;
		cx=a;cy=b+d;
		for(i=1;i<=temp;i++)
		{
			x=point[i][1];y=point[i][2];
			px = x + 1000;
			py = y;
			nCountIntersections += LineSegmentIntersection(ax, ay, bx, by, x, y, px, py,
                            &m1, &c1, &m2, &c2, &intersection_X, &intersection_Y);
 
			nCountIntersections += LineSegmentIntersection(ax, ay, cx, cy, x, y, px, py,
                            &m1, &c1, &m2, &c2, &intersection_X, &intersection_Y);
 
			nCountIntersections += LineSegmentIntersection(cx, cy, bx, by, x, y, px, py,
                            &m1, &c1, &m2, &c2, &intersection_X, &intersection_Y);
 			if( (nCountIntersections % 2) == 1)
				count++;
    	}
		printf("%d\n",count);
	}

 
    
  
 
    
 
    
	return 0;
}