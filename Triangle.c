#include<conio.h>
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter First side :");
	scanf("%d",&a);
	printf("Enter Second side :");
	scanf("%d",&b);
	printf("Enter Third side :");
	scanf("%d",&c);
	if (a + b <= c || a + c <= b || b + c <= a) 
		printf("Triangle is not possible!!");
	else
		printf("Triangle is possible!!\n");  
		if(a==b && a==c && b==c)
			printf("\nTriangle is Equilateral!!");
		else
			if(a==b||a==c||b==c)
				printf("\nTriangle is Isosceles!!");
			else
				printf("\nTriangle is Scalene!!");
return 0;
}


