#include <stdio.h>
#include <math.h>
 
 
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
 
int Calculate_Area_Perimeter_Triangle(float ax, float ay, float bx, float by, float cx, float cy, float *perimeter, float *area)
{
    float A = sqrt((double)(bx-ax) * (bx-ax) + (by-ay) * (by-ay));
    float B = sqrt((double)(bx-cx) * (bx-cx) + (by-cy) * (by-cy));
    float C = sqrt((double)(ax-cx) * (ax-cx) + (ay-cy) * (ay-cy));
    float height = 0;
 
    // Heron's formula for area calculation
    // area = sqrt( s * (s-a) * (s-b) * (s-c))
    float s = (A + B + C) / 2;
 
    *perimeter = A + B + C;
   
    *area = sqrt( s * (s-A) * (s-B) * (s-C));
 
    // area = 1/2 * base * height
    // if side A is base, then height
    height = (*area * 2) / A;
  
    return 1;
}
 
int Calculate_Triangle_Type(float ax, float ay, float bx, float by, float cx, float cy, float *angleA, float *angleB, float *angleC)
{
    float m1, c1, m2, c2;
    float intersection_X, intersection_Y;
    // Find the angle between Line AB and BC
    LineSegmentIntersection(ax, ay, bx, by, bx, by, cx, cy,
                            &m1, &c1, &m2, &c2, &intersection_X, &intersection_Y);
    *angleB = atan( (m1 - m2) / (1 + m1 * m2)) * 180 / 3.1417;
   
 
    // Find the angle between Line BC and AC
    LineSegmentIntersection(bx, by, cx, cy, cx, cy, ax, ay,
                            &m1, &c1, &m2, &c2, &intersection_X, &intersection_Y);
    *angleC = atan( (m1 - m2) / (1 + m1 * m2)) * 180 / 3.1417;
   
 
    // Find the angle between Line AC and AB
    LineSegmentIntersection(cx, cy, ax, ay, ax, ay, bx, by,
                            &m1, &c1, &m2, &c2, &intersection_X, &intersection_Y);
    *angleA = atan( (m1 - m2) / (1 + m1 * m2)) * 180 / 3.1417;
 
    if(*angleA < 90 && *angleB < 90 && *angleC < 90)
        return 1; // Acute Triangle
    else if(*angleA > 90 || *angleB > 90 || *angleC > 90)
        return 2; // obtuse Triangle
    else
        return 3; // Rightangle Triangle
}
 
 
int main()
{
    float m1, c1, m2, c2;
    float intersection_X, intersection_Y;
    float ax, ay, bx, by, cx, cy;
    float perimeter, area;
    float angleA, angleB, angleC;
    float x, y, px, py;
    int type = 0;
    float total = 0;
 
    int nCountIntersections = 0;
    printf("Program to find the given point inside or outside the triangle:\n");
   
    printf("Enter Triangle Point A - X: ");
    scanf("%f", &ax);
 
    printf("Enter Triangle Point A - Y: ");
    scanf("%f", &ay);
 
    printf("Enter Triangle Point B - X: ");
    scanf("%f", &bx);
 
    printf("Enter Triangle Point B - Y: ");
    scanf("%f", &by);
 
    printf("Enter Triangle Point C - X: ");
    scanf("%f", &cx);
 
    printf("Enter Triangle Point C - Y: ");
    scanf("%f", &cy);
 
    printf("Enter Point - X: ");
    scanf("%f", &x);
 
    printf("Enter Point - Y: ");
    scanf("%f", &y);
 
    px = x + 1000;
    py = y;
 
 
    nCountIntersections += LineSegmentIntersection(ax, ay, bx, by, x, y, px, py,
                            &m1, &c1, &m2, &c2, &intersection_X, &intersection_Y);
 
    nCountIntersections += LineSegmentIntersection(ax, ay, cx, cy, x, y, px, py,
                            &m1, &c1, &m2, &c2, &intersection_X, &intersection_Y);
 
    nCountIntersections += LineSegmentIntersection(cx, cy, bx, by, x, y, px, py,
                            &m1, &c1, &m2, &c2, &intersection_X, &intersection_Y);
 
    if( (nCountIntersections % 2) == 1)
        printf("The Given Point is inside the triangle\n");
    else
        printf("The Given Point is outside the triangle\n");
  
 
    Calculate_Area_Perimeter_Triangle(ax, ay, bx, by, cx, cy, &perimeter, &area);
 
    printf("\nPerimeter: %.4f", perimeter);
    printf("\nArea:  %.4f", area);
 
    type = Calculate_Triangle_Type(ax, ay, bx, by, cx, cy, &angleA, &angleB, &angleC);
    total = angleA + angleB + angleC;
 
    if(type == 1)
        printf("\nAcute Triangle");
    else if(type == 2)
        printf("\nObtuse Triangle");
    else if(type == 3)
        printf("\nRight Triangle");
    printf("\n");
	return 0;
}