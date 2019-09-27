#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int x1,x2,y1,y2;
	double distance;
	printf("Enter  X1 coordinate :");
	scanf("%d",&x1);
	printf("Enter  X2 coordinate :");
	scanf("%d",&x2);
	printf("Enter  Y1 coordinate :");
	scanf("%d",&y1);
	printf("Enter  Y2 coordinate :");
	scanf("%d",&y2);
	distance=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	printf("Distance : %f",distance);
	return 0;
}
