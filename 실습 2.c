#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//형식 선언 
struct point {
	int x;
	int y;
	
};


int main(int argc, char *argv[]) 
{
	//instance 선언
	struct point p1, p2;
	int xdiff, ydiff;
	double dist;
	
	printf("input p1 coodinate (x,y) : ");
	scanf("%d %d", &p1.x, &p1.y);
	
	printf("input p2 coodinate (x,y) : ");
	scanf("%d %d", &p2.x, &p2.y);
	
	//distance
	xdiff= p2.x - p1.x;
	ydiff= p2.y - p1.y;
	dist = sqrt(xdiff*xdiff + ydiff*ydiff); // sqrt is math giho root 
	
	printf("distance : %f\n", dist);
	
	system("PAUSE");
	return 0;
	
	

}





















